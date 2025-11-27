#include<stdio.h>
#include<math.h>
int main()
{
int i;
for ( i = 0; i < 10; i+=2)
{
    for (int  j = 1; j <=10; j+=2)
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