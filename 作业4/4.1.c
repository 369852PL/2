#include <stdio.h>
int main()
{
	int a = 2, b = 8;
	while (b-- < 0)
		b = a;
	    a++;
		printf("a=%d,b=%d\n", a, b);
		return 0;
}