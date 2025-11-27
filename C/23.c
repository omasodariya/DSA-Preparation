#include<stdio.h>
#include<conio.h>
int main()
{
int x=7;
printf("%d %d",x++,--x,++x + x++ - --x + ++x);
return 0;
}