#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
int sum=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    sum+=arr[i];
}
sort(arr,arr+n);
int cnt=0;
int sum1=0;
for (int i = n-1; i>=0 ; i--)
{
    if(sum1>sum)
    break;
    sum1+=arr[i];
    sum-=arr[i];
    cnt++;
}
cout<<cnt<<endl;

return 0;
}