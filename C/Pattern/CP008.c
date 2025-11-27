// #include<stdio.h>
// #include<math.h>
// int main()
// {
// int i;
// for ( i = 0; i < 10; i+=2)
// {
//     for (int  j = 0; j <10; j+=2)
//     {
//         if((5*i)+(j+2)<=9)
//     printf("  %d",(5*i)+(j+2));
//     else
//     printf(" %d",(5*i)+(j+2));
//     }

//     printf("\n");
// }

// return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    int n = 5;
    int i, j;
    int x = 2;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%3d", x);
            x += 2;
        }
printf("\n");
    }
        return 0;
}
