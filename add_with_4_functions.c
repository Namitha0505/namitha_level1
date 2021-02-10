#include<stdio.h>
float inp();
float out(float,float,float);
float add(float,float);
int main()
{
  float a,b,d,sum;
  a=inp();
  b=inp();
  sum=add(a,b);
  d=out(a,b,sum);
  return 0;
}
float inp()
{
  float m;
  printf("enter a number");
  scanf("%f",&m);
  return m;
}
float add(float a,float b)
{
 return a+b;
}
float out(float a,float b,float sum)
{
  printf("the sum is %f",sum);
 return 0;
}
