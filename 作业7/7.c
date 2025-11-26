//#include <stdio.h>
//#include <string.h>
//int main() 
//{
//    char str[100];
//    char* start, * end;
//    printf("输入字符串：");
//    gets(str); // 读取一行（或用fgets更安全）
//
//    start = str;
//    end = str + strlen(str) - 1; // 指向最后一个字符（非'\0'）
//
//    // 指针交换字符，实现反转
//    while (start < end) {
//        char temp = *start;
//        *start = *end;
//        *end = temp;
//        start++;
//        end--;
//    }
//
//    printf("反向输出：%s\n", str);
//    return 0;
//}