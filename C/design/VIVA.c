#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int n, i = 0,l=1, k = 0, j = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int k = 0; k < 2*n-1; k++)
    {
        if(k%4==0)
            for (j = 0; j < n; j++,l++)
                arr[i][j] = l;
                
        if(k%4==1)
            for (i=j;i<n;i++,l++)
                arr[i][j] = l;
                
        if(k%4==2)
            for (int j = n; j>=0; j--,l++)
                arr[k][j] = l;
        if(k%4==3)
            for (int i= 0; i>0; i++,l++)
                arr[k][j] = l;
    }


return 0;
}