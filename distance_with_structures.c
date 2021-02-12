//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct point{
int x,y;
};
int distance(struct point m,struct point n)
{
int distance;
distance=sqrt((m.x-n.x)*(m.x-n.x)+(m.y-n.y)*(m.y-n.y));
return distance;
}
int main()
{
struct point m,n;
printf(“enter coordinate of point m”);
scanf(“%d%d”,&m.x,&m.y);
printf(“enter coordinate of point n”);
scanf(“%d%d”,&n.x,&n.y);
printf(“distance between points m and n %d”,distance(m,n));
return 0;
}

