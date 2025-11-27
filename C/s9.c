#include<stdio.h>
#include<conio.h>

void fac();

int main()
{
int n;
//To find a factorial of a number
printf("Enter a number:");
scanf("%d",&n);

fac(n);

return 0;
}

void fac(int n)
{
int i,x=1;
for ( i = 1; i <= n; i++)
{
    x=x*i;
}
printf("%d",x);
}