#include <stdio.h>
#include <conio.h>
int sum(int c);
int main()
{
//    sum(10);
   printf("The sum is: %d",sum(10));
    return 0;
}
int sum(int c)
{
    if (c==1)
    {
        return 1;
    }
int s1=sum(c-1);
int fs=s1+c;
    
return fs;

}