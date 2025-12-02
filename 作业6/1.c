#include <stdio.h>
void fun(int x, int y, int z)
{
	z = x * x + y * y;
}
int main()
{
	int a = 38;
	fun(7, 3, a);
	printf("%d\n", a);
	return 0;
}