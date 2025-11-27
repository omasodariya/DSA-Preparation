#include<stdio.h>
#include<math.h>
int main()
{
int i;
for ( i = 0; i < 5; i++)
{
    for (int  j = 1; j <=5; j++)
    {
        if(5*i+j<=9)
    printf("  %d",5*i+j);
    else
    printf(" %d",5*i+j);
    }
    
    printf("\n");
}

return 0;
}