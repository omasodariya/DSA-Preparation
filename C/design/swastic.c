#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k, l, m, n;
    printf("Enter the number :");
    scanf("%d", &n);

    for (i = 1; i < 2 * n; i++)
    {
        if (i > 1 && i < n)
        {
            for (j = 1; j < 2 * n; j++)
            {
                if (j == 1 || j == n)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        if (i > n && i < 2 * n - 1)
        {
            for (j = 1; j < 2 * n; j++)
            {
                if (j == 2 * n - 1 || j == n)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        if (i == 1)
        {

            for (j = 1; j < 2 * n; j++)
            {

                if (j == 1 || j >= n)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        if (i == 2 * n - 1)
        {

            for (j = 1; j < 2 * n; j++)
            {

                if (j == 2 * n - 1 || j <= n)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        if (i == n)
        {

            for (j = 1; j < 2 * n; j++)
            {

                printf("* ");
            }
        }
     

        printf("\n");
    }
    return 0;
}