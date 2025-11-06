#include <stdio.h>
int main()
{
	int a, b, temp, gcd, lcm;
	printf("请输入两个整数:");
	scanf_s("%d %d", &a, &b);
	temp = a % b;
	while (temp != 0)
	{
		a = b;
		b = temp;
		temp = a % b;
	}
	gcd = b;
	lcm = (a * b) / gcd;
	printf("最大公约数:%d\n", gcd);
	printf("最小公约数:%d\n", gcd);
	return 0;
}