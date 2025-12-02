#include <stdio.h>
long f(int g)
{
	switch (g)
	{
	case 0:return 0;
	case 1:
	case 2:return 1;
	}
	return(f(g - 1) + f(g - 2));
}
int main()
{
	long k;
	k = f(7);
	printf("k=%d\n", k);
	return 0;
}
