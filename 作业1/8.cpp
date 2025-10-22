#include <stdio.h>
int main() {
    int a, b, c, max;
    // 输入三个数
    scanf_s("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max) {
        max = b;
        if (c > max) {
            max = c;
        }
    }
    else if (c > max) {
        max = c;
    }
    // 输出最大值
    printf("%d", max);
    return 0;
}