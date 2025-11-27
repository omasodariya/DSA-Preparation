#include<stdio.h>

int main()
{
int a=4,b,c;

b=a++ +a--;
c=++b+b--;
printf("%d %d",b,c);


return 0;
}