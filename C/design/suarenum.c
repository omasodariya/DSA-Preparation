#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k, n, m=3;
    // Make a square
    printf("Enter the number :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (k = 1; k <= n; k++)
            {
                printf("%3d", k);
            }
        }
        else if (i == n)
        {
            for (int l = 3 * n - 2; l >= 2 * n - 1; l--)
            {
                printf("%3d", l);
            }
        }

        else
        {

            for (j = 1; j <= 3*n-5 ; j++)
            {
                if (j == 1)
                {
                    printf("%3d", (4 * n - 4) - (i - 2));
                }
                else if (j == 3 * n - 5)
                {
                    printf("%3d", n + (i - 1));
                }
                printf(" ");

            }
        }

        printf("\n");
    }

    return 0;
}