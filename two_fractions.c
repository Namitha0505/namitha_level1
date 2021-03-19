//WAP to find the sum of two fractions.
#include<stdio.h>
struct fraction{
int num;
int den;};
struct fraction input()
{
  struct fraction f;
  printf("enter numerator");
  scanf("%d",&f.num);
  printf("enter denominator");
  scanf("%d",&f.den);
  return f;
}
int gcd(int a,int b)
{
 int i,hcf=1;
for(i=1;i<=a&&i<=b;i++)
  {
    if(a%i==0&&b%i==0)
{
  hcf=i;
}
}
 return hcf;
}
struct fraction sum(struct fraction f1,struct fraction f2)

{
struct fraction r;
r.num=(f1.num*f2.den)+(f1.den*f2.num);
r.den=f1.den*f2.den;
int h=gcd(r.num,r.den);
struct fraction p;
p.num=r.num/h;
p.den=r.den/h;
return p;
}
void output(struct fraction p)
{
printf("The result is:%d/%d",p.num,p.den);
}
int main()
{
struct fraction f1,f2,add;
f1=input();
f2=input();
add=sum(f1,f2);
output(add);
return 0;
}
