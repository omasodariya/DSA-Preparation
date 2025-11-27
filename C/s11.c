#include <stdio.h>
#include <conio.h>

void three();

int main()
{
    int a, b,c;
    // To find minimum or maximum of numbers
    printf("Enter A:");
    scanf("%d", &a);
    printf("Enter B:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);

    // two(a, b);
    three(a, b,c);

    return 0;
}

void two(int a, int b)
{

    if (a > b)
    {
        printf("A is maximum.\n");
        printf("B is minimum.\n");
    }
    else
    {
        printf("B is maximum.\n");
        printf("A is minimum.\n");
    }
}


void three(int a, int b,int c)
{

  a>b && a>c ? printf("A is maximum"): b>c ? printf("B is maximum"): printf("C is maximum");
  printf("\n");
  a<b && a<c ? printf("A is minimum"): b<c ? printf("B is minimum"): printf("C is minimum");


}