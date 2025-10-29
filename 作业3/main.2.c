#include <stdio.h>
int main()
{
  int a,b,c;
  a=10;b=60;c=30;
  if (a>b) a=b;
  b=c;
  c=a;
  printf("a=%d b=%d c=%d\n",a,b,c);
  return 0;
}