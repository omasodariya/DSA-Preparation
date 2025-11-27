#include<bits/stdc++.h>
using namespace std;

int main()
{
int s,n,mini=INT_MAX;
cin>>s>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);
for (int i = 0; i < n-s+1; i++)
{
    mini=min(mini,arr[i+s-1]-arr[i]);
}
cout<<mini;

return 0;
}