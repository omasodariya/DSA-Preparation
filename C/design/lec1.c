#include<stdio.h>
//#include<conio.h>
#include<math.h>
int main()
{

int i,j,n;
scanf("%d",&n);
// printf("\n\t");
for ( i = 1; i < 2*n; i++)
{
    if (i<=n)
    {     
    for ( j = 1; j < i; j++)
    {
        printf(" ");
    }
    for ( j = 1; j <= n-i+1; j++)
    {
        printf("*");
    }
    }
    if (i>n)
    {     
    for ( j = 1; j <2*n-i; j++)
    {
        printf(" ");
    }
    for ( j = 1; j <= i-n+1; j++)
    {
        printf("*");
    }
    }
    
    
    printf("\n");
}

return 0;
}