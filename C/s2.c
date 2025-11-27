#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n1,n2;
    printf("Aim:find prime number in range");
    printf("Enter starting range:");
    scanf("%d",&n1);
    printf("Enter ending range:");
    scanf("%d",&n2);
    
    for(i=10;i>0;i--)
    {
 for(j=1;j<=i;j++)
 {
    printf("%d",j);

 }
 printf("\n");

    }
return 0;
}
int isPrime(int n)
{
for (int i = 2; i*i<=n; i++)
{
 int n1;
 n1=n%i;
 return n1;
}


}
