#include<stdio.h>
float inp(float,float);
float out(float,float);
float add(float,float);
int main()
{
  float a,b,c,d,sum;
  a=inp(b,c);
  sum=add(b,c);
  d=out(b,c);
  printf(“The sum is %f”,sum);
}
float inp(float m,float n)
{
return m,n;
}
float add(float p,float q)
{
 printf("enter two numbers");
 scanf("%f%f",&p,&q);
 return(p+q);
}
float out(float x,float y)
{
return 0;
}
