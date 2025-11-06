#include <stdio.h>
int main() 
{
    int days = 30;
    double millionaire_give = 0.01; // 第一天给1分钱
    double total_millionaire = 0.0;
    double total_stranger = 0.0;

    for (int i = 1; i <= days; i++) 
    {
        total_stranger += 100000; // 陌生人每天给10万元
        total_millionaire += millionaire_give;
        millionaire_give *= 2; // 每天给的钱是前一天的两倍
    }

    printf("陌生人给百万富翁的总金额: %.2f 元\n", total_stranger);
    printf("百万富翁给陌生人的总金额: %.2f 元\n", total_millionaire);
    return 0;
}