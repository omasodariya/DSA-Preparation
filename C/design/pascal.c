#include <stdio.h>
#include <math.h>
long ncr(long n,long r);
long fac(long n);
int main()
{
 long n;

  printf("Enter a number:");
  scanf("%ld", &n);

  for (long i = 0; i < n; i++)
  {
    for (long j = 0; j < n - i ; j++)
    {
      printf("   ");
    }
    for (long k = 0; k <= i; k++)
    {
      printf("%3ld", ncr(i , k));
      printf("   ");
    }
    printf("\n");
  }

  return 0;
}

long fac(long n)
{
  int ans = 1;
  for (long i = n; i > 0; i--)
  {
    ans = ans * i;
  }
  return ans;
}

long ncr(long n, long r)
{
  long ans;
  ans = fac(n) / (fac(n - r) * fac(r));
  return ans;
}