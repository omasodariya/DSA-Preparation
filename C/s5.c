#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j,n;
    i = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    do
    {
    j = 1;
        do
        {
            printf("%d", j);
            j++;
        } while (j <= i);

        printf("\n");
        i++;
    } while (i <=n);

// getch();
}