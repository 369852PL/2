#include <stdio.h>
int main()
{
	int days = 10;
	int chocolate = 1;
	for (int i = days - 1; i >= 1; i--)
	{
		chocolate = (chocolate + 1) * 2;
	}
	printf("小明妈妈总共买了%d块巧克力\n", chocolate);
	return 0;

}