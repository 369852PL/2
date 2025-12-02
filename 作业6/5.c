#include <stdio.h>
int f(int b[][4])
{
	int i, j, s = 0;
	for (j = 0; j < 4; j++)
	{
		i = j;
		if (i > 2) i = 3 - j;
		s += b[i][j];
	}
	return s;
}
int main()
{
	int a[4][4] = 
	{ 
		{1,2,3,4},
		{5,6,7,8} ,
		{9,10,11,12},
		{13,14,15,16} 
	};
	printf("%d\n", f(a));
	return 0;
}