#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
int n,k;
printf("Enter a number:");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    k=65;
    for (int j =1; j <= 2*n-1; j++)
    {
    if((j>n-i-1)&&(j<n+i+1)){
    printf("%c",k);  
    if(j<n)
    k++;
    else 
    k--;
    }
    else{
    printf(" ");
    }
    }
    printf("\n");

}


return 0;
}