#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;

printf("Enter A: ");\
scanf("%d",&a);
printf("Enter B: ");
scanf("%d",&b);
printf("Enter C: ");
scanf("%d",&c);

if (a>b && a>c)
{
   printf("A is greater.");
}
else if (b>c&& b>a)
{
   printf("B is greater.");
}
else if (c>a && c>b)
{
   printf("C is greater.");
}


return 0;
}