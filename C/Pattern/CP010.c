#include<stdio.h>
#include<math.h>
int main()
{
int i,j,n=5;
for ( i = 1; i <= n; i++)
{
    for ( j = 1; j <= 6; j++)
    {
        if((j%2)!=0)
        printf("%2d",i);
        else
        printf("%2d",(j+1)/2);
    }
    printf("\n");
}

return 0;
}

// #include<stdio.h>
// #include<math.h>
// int main()
// {
// int i,j;
// for ( i = 1; i <= 5; i++)
// {
//     for ( j =1; j <=3; j++)
//     {
        
//     printf("%d %d ",i,j);
//     }
//     printf("\n");
// }

// return 0;
// }