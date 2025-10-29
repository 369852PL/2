#include <stdio.h>
int main()
{
 int num, temp, digit, count = 0, reverse = 0;
 printf("请输入一个不多于5位的数：");
 scanf_s("%d", &num);
 temp = num;
 while (temp != 0) {
  temp /= 10; count++;
 }
 printf("它是%d位数\n", count);
 printf("每一位数字；");
 temp = num;
 switch (count) {
  case 5:digit = temp / 10000;
   printf("%d", digit);
   reverse = reverse * 10 + digit;
   temp %= 10000;
  case 4:digit = temp / 1000;
   printf("%d", digit);
   reverse = reverse * 10 + digit;
   temp %= 1000;
  case 3:digit = temp / 100;
   printf("%d", digit);
   reverse = reverse * 10 + digit;
   temp %= 100;
  case 2:digit = temp / 10;
   printf("%d", digit);
   reverse = reverse * 10 + digit;
   temp %= 10;
  case 1:digit = temp / 1;
   printf("%d", digit);
   reverse = reverse * 10 + digit;
   break;
   dafault:
    printf("输入非法\n");
   return 0;
 }
 printf("\n逆序；%d", reverse);
 return 0;
}