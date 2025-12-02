#include <stdio.h>
int f(int a);
int main()
{
	int s[8] = { 1,2,3,4,5,6 },i,d = 0;
	for (i = 0; f(s[i]); i++)
		d += s[i];
	printf("%d\n", d);
	return 0;
}
int f(int a)
{
	return a % 2;
}