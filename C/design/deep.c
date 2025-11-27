// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = n; i > 0; i--)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j > i)
//                 printf(" ");
//             else
//                 printf("*");
//         }
//         for (int j = n; j > 0; j--)
//         {
//             if (j > i)
//                 printf(" ");
//             else
//                 printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j > i)
                printf("  ");
            else
                printf("%2d", j);
        }
        for (int j = n; j > 0; j--)
        {
            if (j > i)
                printf("  ");
            else
                printf("%2d", j);
        }
        printf("\n");
    }
    return 0;
}
// #include <stdio.h>

// int main()
// {
   
// char Str1[100], Str2[100];
// int i,j;
// printf("\n Please Enter the First String : ");
// gets(Str1);
// printf("\n Please Enter the Second String : ");
// gets(Str2);
// for(i = 0;Str1[i]!='\0';i++);
// for(j = 0;Str2[j]!='\0';j++);

//     // printf("%d",i);
// if(i<j)
// printf("\n strl is Less than str2");
// else if(i>j)
// printf("\n str2 is Less than strl ");
// else
// printf("\n strl is Equal to str2");

// // }
// return 0; 
// }

