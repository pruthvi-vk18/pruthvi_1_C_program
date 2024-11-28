#include<stdio.h>
int large(int a,int b,int c)
{
  if(a>=b && a>=c)return a;
  if(b>=a && b>=c)return b;
  return c;
}
int main()
{
  int x,y,z;
  printf("enter the three number\n");
  scanf("%d%d%d",&x,&y,&z);
  printf("the largest=%d\n",large(x,y,z));
  return 0;
}
