#include<stdio.h>
#include<conio.h>

void pn0();

int main()
{
int n;
//To find a factor of a number
printf("Enter a number: ");
scanf("%d",&n);

pn0(n);

return 0;
}

void pn0(int n)
{

    if (n>0)
    {
        printf("%d is Positive",n);
    }
    else if (n<0)
    {
        printf("%d is negative",n);
    }
  else
    {
        printf("%d is zero",n);
    }
    


}