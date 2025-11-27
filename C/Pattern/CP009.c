#include<stdio.h>
//#include<conio.h>
#include<math.h>
int main()
{
int i,j,n=5;
for ( i = 1; i <= n; i++)
{
    for ( j = 1; j <= n; j++)
    {
        printf("%3d",i*j);

    }
    printf("\n");
}

return 0;
}