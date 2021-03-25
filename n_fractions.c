//WAP to find the sum of n fractions.
#include<stdio.h>
struct fraction
{
  int num;
  int deno;
};
struct fraction
one_input ()
{
  struct fraction h;
  printf ("enter numerator");
  scanf ("%d", &h.num);
  printf ("enter denominator");
  scanf ("%d", &h.deno);
  return h;
}

struct fraction
n_input (int n, struct fraction a[])
{
  for (int i = 0; i < n; i++)
    {
      a[i] = one_input ();
    }
}

int
hcf (int a, int b)
{
  int g = 1;
  for (int i = 1; i <= a && i <= b; i++)
    {
      if (a % i == 0 && b % i == 0)
	g = i;
    }
  return g;
}

struct fraction
one_add (struct fraction a, struct fraction b)
{
  struct fraction f;
  f.num = (a.num * b.deno) + (b.num * a.deno);
  f.deno = a.deno * b.deno;
  return f;
}

struct fraction
n_add (int n, struct fraction a[n])
{
  struct fraction sum;
  sum.num = 0;
  sum.deno = 1;
  for (int i = 0; i < n; i++)
    {
      sum = one_add (a[i], sum);
    }
  int divisor;
  divisor = hcf (sum.num, sum.deno);
  struct fraction final;
  final.num = sum.num / divisor;
  final.deno = sum.deno / divisor;
  return final;
}

struct fraction
output (struct fraction final)
{
  printf ("the sum is %d/%d", final.num, final.deno);
}

int
main ()
{
  int n;
  struct fraction a[n], p;
  printf ("enter the number of fractions");
  scanf ("%d", &n);
  n_input (n, a);
  p = n_add (n, a);
  output (p);
}
