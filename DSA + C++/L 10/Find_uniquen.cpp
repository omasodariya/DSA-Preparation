#include<iostream>
using namespace std;

int main()
{
int n,ans=0;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i =0; i < n; i++)
{
    ans=ans^arr[i]^i;
}
cout<<ans;


return 0;
}