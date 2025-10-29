#include <stdio.h>
int main() {
 int num,a,b,c;
 printf("请输入一个三位整数；");
 scanf("%d",&num);
 a=num/100;
 b=(num/100)%10;
 c=num%10;
 if (a*a*a*+b*b*b+c*c*c==num) {
  printf("是水仙花",num);
 }
   else {
       printf("No",num);
   }
    return 0;

}