#include<stdio.h>
float inp(float,float,float);
float out(float);
float res(float,float,float);
int main()
{
float a,h,b,d,vol,q,p;
a=inp(h,b,d);
vol=res(h,b,d);
q=out(p);
printf(“the volume of tromboloid is %f”,vol);
}
float inp(float  x,float  y,float  z)
{
return (x,y,z);
}
float res(float h,float  b,float d)
{
printf(“enter h value”);
scanf(“%f”,&h);
printf(“enter b value”);
scanf(“%f”,&b);
printf(“enter d value”);
scanf(“%f”,&d);
return ((h*b*d)+(d/b))/3;
}
float out(float s)
{
return 0;
}

