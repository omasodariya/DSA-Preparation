#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,ax,bx,cx;
int maxi=0;
cin>>n>>ax>>bx>>cx;
int arr[3]={ax,bx,cx};
sort(arr,arr+3);
int a=arr[0];
int b=arr[1];
int c=arr[2];
for (int i = 0; a*i <= n; i++)//x
{
    for (int j = 0; b*j <= n-a*i; j++)
    {
        int k=(n-(i*a+j*b))/c;
            if(n==i*a+j*b+k*c){
                maxi=max(maxi,i+j+k);
            }       
    }
    
}
cout<<maxi;

return 0;
}