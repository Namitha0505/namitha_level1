//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>

float
inp ()
{
  int num;
  printf ("enter a number");
  scanf ("%d", &num);
  return num;
}

void
inp_array (int n, int a[n])
{
  int i;
  for (i = 0; i < n; i++)
    {
      printf ("enter  number %d\n", i + 1);
      scanf ("%d", &a[i]);
    }

}

int
add_n (int n, int a[n])
{
  int sum = 0;
  for (int i = 0; i < n; i++)
    {
      sum = sum + a[i];
    }
  return sum;
}

int
out (int n, int a[n], int sum)
{


  printf ("the sum is %d", sum);

}

int
main ()
{
  int n, sum, q, r, s;
  n = inp ();
  int a[n];
  inp_array (n, a);
  q = add_n (n, a);
  out (n, a, q);
  return 0;
}
