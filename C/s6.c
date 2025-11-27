#include<stdio.h>
int main()
{
int cal,y=10,p=20;

cal=++y + y++ + --y + ++p - --p - --p;
printf("%d",cal);
printf("%d\n",y);
printf("%d\n",p);

return 0;
}