//Write a program to find the sum of n different numbers using 4 functions#include<stdio.h>
#include<stdio.h>
int main()
{
int i,n,sum=0;
printf(“enter the value of n”);
scanf(“%d”,&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf(“the sum of %d numbers is %d”,n,sum);
}
