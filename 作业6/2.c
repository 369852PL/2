#include <stdio.h>
void fun(int x, int y);
int main()
{
	int x = 5, y = 3;
	fun(x, y);
	printf("%d,%d\n", x, y);
	return 0;
}
void fun(int x, int y)
{
	x = x + y;//x=8
	y = x - y;//y=5
	x = x - y;//x=3
	printf("%d,%d\n", x, y);
}