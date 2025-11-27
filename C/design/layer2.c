#include <stdio.h>
#include <conio.h>

int min(int a, int b);
int max(int a, int b);
int main()
{
    int i, j, c, n, x, d, f, a1;

    scanf("%d", &n);

    for (i = 1; i < 2 * n; i++)
    {
        for (j = 1; j < 2 * n; j++)
        {
            c = min(i, j);
            x = i + j;
            a1 = max(i, j);
            if (x <= 2 * n)
            {
                if ((n - (c - 1)) % 2 != 0)
                    printf("* ");
                else
                    printf("  ");
            }
            else
            {
                if ((n - (2 * n - 1 - a1)) % 2 != 0)
                    printf("* ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

int min(int a, int b)
{
  if (a > b)
  {
    return b;
  }
  else
  {
    return a;
  }

}

int max(int a, int b)
{
  if (a > b)
  {
    return a;
  }
  else
  {
    return b;
  }
}