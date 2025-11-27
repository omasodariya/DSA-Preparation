#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k, n;
    // Make a square
    printf("Enter the number :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (k = 1; k <= n; k++)
            {
                printf("* ");
            }
        }
        else
        {

            for (j = 1; j <= 2 * n - 2; j++)
            {
                if (j == 1 || j == 2 * n - 2)
                {
                    printf("*");
                }
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}