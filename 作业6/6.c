#include <stdio.h>
void dight()
{
	for (int i = 0; i < 100; i++)
	{
		int t = i / 10;
		int g = i % 10;
		if (i % 3 == 0 && (t == 5 || g == 5))
		{
			printf("%d\t", i);
		}
	}
}
int main()
{
	dight();
	return 0;
}