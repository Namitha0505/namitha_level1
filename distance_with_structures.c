//WAP to find the distance between two points using structures and 4 functions.

#include<stdio.h>
#include<math.h>
struct point
{
  float x, y;
};
struct point m, n;
float
distance (struct point m, struct point n)
{
  float dist;
  dist = sqrt ((m.x - n.x) * (m.x - n.x) + (m.y - n.y) * (m.y - n.y));
  return dist;
}

float
input ()
{
  printf ("enter the x coordinate of point A-\n");
  scanf ("%f", &m.x);
  printf ("enter the y coordinate of point A-\n");
  scanf ("%f", &m.y);
  printf ("enter the x coordinate of point B-\n");
  scanf ("%f", &n.x);
  printf ("enter the y coordinate of point B-\n");
  scanf ("%f", &n.y);
}

float
output (float dist)
{
  printf ("Distance between point A and point B:%f\n", dist);
}

int
main ()
{
  float dist;
  input ();
  dist = distance (m, n);
  output (dist);
  return 0;
}

