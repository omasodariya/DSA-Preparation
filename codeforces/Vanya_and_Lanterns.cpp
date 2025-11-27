#include<bits/stdc++.h>
using namespace std;

int main()
{
long n,l;
cin>>n>>l;
long arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

sort(arr,arr+n);
long maxi=arr[0]*2;
for (int i=0; i <n-1; i++)
{
    maxi=max(maxi,arr[i+1]-arr[i]);
}
maxi=max(maxi,(l-arr[n-1])*2);
cout<<fixed<<setprecision(10)<<maxi/2.0;

return 0;
}