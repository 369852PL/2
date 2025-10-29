#include <stdio.h>
int main()
{
   char g;
   float w;
   int b;
   printf("请输入性别和体重（m为男，f为女）：");
   scanf("%c %f",&g,&w);
   if (g=='m') {
      if (w>120)
         b=200;
   else b=180;}
   else if (g=='f') {
      if (w>100)
         b=150;
   else b=120;}
   printf("数据血量；\n");
   return 0;
}