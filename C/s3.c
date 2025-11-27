#include <stdio.h>
#include <conio.h>

//pyramid

int main()
{
   int i, j, n;
   printf("enter a number:");
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
   {

      for (j = 1; j <=n-i; j++)
      {
         printf(" ");
      }
      for (j = 1; j <= i; j++)
      {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main(void) {
//   int n;
//   printf("How many rows you want fam?\n");
//   scanf("%d", &n);
//   int j = 2*n-1;
//   char row[j];
//   memset(row, ' ', j);
//   for(int i=0; i<n; i++) {
//     row[n+i-1] = '*';
//     row[n-i-1] = '*';
//     printf("%s\n", row);
//   }
//   return 0;
// }

// int main()
// {
//    int i, j, n,x;
//    printf("enter a number:");
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//       x=((i+1)*(i+1))-((i*i)+2);
//       for (j = 1; j <=n-i; j++)
//       {
//          printf(" ");
//       }
//       for (j = 1; j <= x; j++)
//       {
//          printf("*");
//          // i=i+2;
//       }
//       printf("\n");
//    }
//    return 0;
// }