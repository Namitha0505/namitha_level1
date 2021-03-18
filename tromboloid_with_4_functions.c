
#include<stdio.h>
float inp();
float out(float);
float res(float,float,float);
int main()
{
float a,p,h,b,d,q,v;
a=inp();
p=res(a,a,a);
q=out(p);
return 0;
}
float inp()
{
float h,b,d;
printf("enter the value of h");
scanf("%f",&h);
printf("enter the value of b");
scanf("%f",&b);
printf("enter the value of d");
scanf("%f",&d);
return h,b,d;
}
float res(float h,float  b,float d)
{
float volume;
volume=((h*b*d)+(d/b))/3;
return volume;
}
float out(float volume)
{
printf("volume of tromboloid is %f",volume);
return 0;
}



