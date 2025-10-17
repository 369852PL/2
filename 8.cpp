#include <stdio.h>

// 定义函数，接收三个整数参数，返回最大值
int getMax(int x, int y, int z) {
    int max = x;  // 假设第一个数为最大值
    if (y > max)  // 比较第二个数与当前最大值
        max = y;
    if (z > max)  // 比较第三个数与当前最大值
        max = z;
    return max;   // 返回最终最大值
}

int main() {
    int a, b, c, maxValue;
    // 提示用户输入三个整数
    printf("请输入三个整数（用空格分隔）：");
    scanf("%d %d %d", &a, &b, &c);  // 读取用户输入

    maxValue = getMax(a, b, c);  // 调用函数获取最大值
    printf("三个数中的最大值是：%d\n", maxValue);  // 输出结果

    return 0;
}