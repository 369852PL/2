#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	printf("请输入字符串:");
	gets(a);
	int len = strlen(a);
	for (int i = 0; i < len / 2; i++)
	{
		char temp = a[i];
		a[i] = a[len - 1 - i];
		a[len - 1 - i] = temp;
	}
	printf("反转后的字符串；%s\n", a);
	return 0;
}