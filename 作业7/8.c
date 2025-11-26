#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    char* p = str;
    printf("输入字符串：");
    gets(str);

    while (*p != '\0') 
    {
        // 匹配"foo"
        if (*p == 'f' && *(p + 1) == 'o' && *(p + 2) == 'o') 
        {
            *p = 'x';
            *(p + 1) = 'x';
            *(p + 2) = 'x';
            p += 3; // 跳过已替换的部分
        }
        else 
        {
            p++;
        }
    }

    printf("替换后：%s\n", str);
    return 0;
}