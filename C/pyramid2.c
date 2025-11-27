#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, n=10, k;

    // printf("Enter number :");
    // scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10- i; j++)
        {
            printf(" ");
        }

        for (k = 1; k <= (2 * i)- 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
// {
//     int i, j, n, k;

//     printf("Enter number :");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }

//         for (k = 1; k <= (2 * i)- 1; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }