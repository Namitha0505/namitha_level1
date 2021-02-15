#include<stdio.h>
int main()
{
float h,b,d,volume;
printf(“enter h value”);
scanf(“%f”,&h);
printf(“enter b value”);
scanf(“%f”,&b);
printf(“enter d value ”);
scanf(“%f”,&d);
volume=((h*d*b)+(d/b))/3;
printf(“ volume of tromboloid is %f ”,volume);
return 0;
}

