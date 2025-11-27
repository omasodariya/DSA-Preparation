#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1, j=1, k=1, n;
    int initalvalue=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do
    {
        do
        {
           printf(" ");
           k++;
        } while (k<=n-i-1);
    do
    {
      printf("* ");
        j++;
    } while (j<=i);
    
        printf("\n");

      i++;
    } while (i <= n);

    return 0;
}