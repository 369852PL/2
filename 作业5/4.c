#include <stdio.h>
int main()
{
	int a[5][5];
	int sum1=0, sum2=0;
	printf("请输入5*5矩阵:\n");
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < 5; i++)
	{
		sum1 += a[i][i];
		sum2 += a[i][4-i];
	}
	printf("主对角线和:%d\n",sum1);
	printf("副对角线和:%d\n", sum2);
	printf("两对角线总和:%d\n", sum1+sum2);
	return 0;
}
