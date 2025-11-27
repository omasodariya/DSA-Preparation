#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n,m,cnt=0;
cin>>n>>m;
int arr[m];
for (int i = 0; i < m; i++)
{
    cin>>arr[i];
}
int cp=1;
for (int i = 0; i < m; i++)
{
    if(cp!=arr[i]){
    if(cp>arr[i])
    cnt+=n-cp+arr[i];
    else
    cnt+=arr[i]-cp;
    }
    cp=arr[i];
}
cout<<cnt;

return 0;
}