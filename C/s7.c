#include <stdio.h>
#include <math.h>

// int main()
// {
//     int i, j, n,x,sum=0;

//     printf("Enter a number:");
//     scanf("%d",&n);
//     j=n;

//     while (n>0)
//     {
//  int ld=n%10;
//  n/=10;
//  sum=sum*10+ld;
//     }
//     printf("%d\n",sum);
//     return 0;
// }

// int main()
// {
//     int i, j, n, x;
//     printf("Enter a number:");
//     scanf("%d", &n);
//     j = n;
//     for (i = 1; j > 0; i++)
//     {
//         j = j % 10;
//         printf("%d", j);
//         j = n / pow(10, i);
//     }
//     return 0;
// }

int main()
{
    int i = 0, n,j=0, ld, a, sum = 0, x;
    printf("Enter a number:");
    scanf("%d", &n);

    a = n;
    // x=2.3%1;

    while (a > 0)
    {
        // ld = n % 10;
        // printf("%d", ld);
        a = a / 10;
        i++;
    }

    while (n > 0)
    {
        ld = n % 10;
        // printf("%d", ld);1
        x = pow(ld, i);
        n = n / 10;
        j = j+ x;
        // i++;
    }
    sum=sum+j;
    printf("%d", sum);
}