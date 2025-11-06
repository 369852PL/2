#include <stdio.h>

// 判断一个数是否为素数
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main() {
    int even;
    printf("请输入一个大于2的偶数: ");
    scanf_s("%d", &even);

    if (even <= 2 || even % 2 != 0) {
        printf("请输入大于2的偶数！\n");
        return 1;
    }

    int found = 0;
    for (int i = 2; i <= even / 2; i++) {
        if (isPrime(i) && isPrime(even - i)) {
            printf("%d = %d + %d\n", even, i, even - i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("无法找到符合条件的两个素数之和。\n");

    return 0;
}