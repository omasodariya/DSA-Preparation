#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
int n,max;
scanf("%d",&n);
int arr[n];
for(int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
max=arr[0];
for (int i = 0; i < n; i++)
{
    if (max<arr[i])
        max=arr[i];    
}
// printf("%d",max);
for (int i=max; i>0; i--)
{
    printf("%2d",i);
    for (int j = 0; j<n; j++)
    {
       if (arr[j]>=i)
      printf(" *");
      else 
      printf("  ");
         
    }
    printf("\n");
    
}
printf("  ");
for (int i = 0; i < n; i++)
{
    printf("%2d",arr[i]);
}



return 0;
}