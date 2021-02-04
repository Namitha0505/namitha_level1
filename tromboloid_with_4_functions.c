#include<stdio.h>
int inp(int,int,int);
int out(int);
int res(int,int,int);
int main()
{
int a,h,b,d,vol,q,p;
a=inp(h,b,d);
printf(“enter h value”);
scanf(“%d”,&h);
printf(“enter b value”);
scanf(“%d”,&b);
printf(“enter d value”);
scanf(“%d”,&d);
vol=res(h,b,d);
q=out(p);
printf(“%d is the volume of tromboloid”,vol);
}
int inp(int x,int y,int z)
{
return (x,y,z);
}
int res(int h,int b,int d)
{
return ((h*b*d)+(d/b))/3;
}
int out(s)
{
return 0;
}
