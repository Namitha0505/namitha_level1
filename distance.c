//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float inp();
float res(float,float,float,float);
float out(float);
int main()
{
float a,b,c,d,e,D;
printf(“enter the value of x coordinate of first point:”);
a=inp();
printf(“enter the value of y coordinate of first point:”);
b=inp();
printf(“enter the value of x coordinate of second point:”);
c=inp();
printf(“enter the value of y coordinate of second point:”);
e=inp();
d=res(a,b,c,e);
D=out(d);
return 0;
}
float inp()
{
float x;
scanf(“%f”,&x);
return x;
}
float res(float x1,float y1,float x2,float y2)
{
float distance;
distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
return distance;
}
float  out(float distance)
{
printf(“distance between two points is %f”,distance);
return 0;
}
