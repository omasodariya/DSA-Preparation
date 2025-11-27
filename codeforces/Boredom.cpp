#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll arr[100000];

int main()
{
ll n;
cin>>n;
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
    arr[x]+=x;
}

for (int i = 2; i < 100001; i++)
{
    arr[i]=max(arr[i],arr[i-1]+arr[i+1]);
}

cout<<arr[100000];


return 0;
}