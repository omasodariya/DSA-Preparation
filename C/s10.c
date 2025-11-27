#include<stdio.h>
#include<conio.h>

void factor();

int main()
{
int n;
//To find a factor of a number
printf("Enter a number:");
scanf("%d",&n);

factor(n);

return 0;
}

void factor(int n)
{
int i,x;
for ( i = 1; i <= n; i++)
{
    x=n%i;
    if (x==0)
    {
        printf("Factor of %d is %d\n",n,i);
    }
    
}

}