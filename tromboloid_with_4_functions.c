
#include<stdio.h>
float inp();
float out(float);
float res(float,float,float);
int main()
{
float a,e,c,p,h,b,d,q,v;
printf(“enter the value of h”);
a=inp();
printf(“enter the value of d”);
e=inp();
printf(“enter the value of b”);
c=inp();
p=res(a,e,c);
q=out(p);
return 0;
}
float inp()
{
float x;
scanf(“%f”,&x);
return x;
}
float res(float h,float  b,float d)
{
float volume;
volume=((h*b*d)+(d/b))/3;
return volume;
}
float out(float volume)
{
printf(“volume of tromboloid is %f”,volume);
return 0;
}


