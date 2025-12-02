#include <stdio.h>
int main()
{
	double h = 100;
	double sum = h;
	for (int i=0; i < 10; i++)
	{
		h = h / 2;
		sum = sum + h * 2;
	}
	printf("第十次落所经历的长度:%.6f\n", sum);
	printf("第十次反弹的高度:%.6f\n", h/2);

}