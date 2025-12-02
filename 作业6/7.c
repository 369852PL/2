#include <stdio.h>
int dight(int num)
{
	if (num <= 1) return 0;
	int i = 2;
	while(i<=num)
	{
		i++;
		if (num % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	printf("请输入一个数:");
	scanf_s("%d", &n);
	if (dight(n))
	{
		printf("%d是素数\n");
	}
	else
	{
		printf("%d不是素数\n");
	}
	return 0;
}