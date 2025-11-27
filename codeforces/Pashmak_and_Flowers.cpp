#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n;
cin>>n;
long long arr[n];

for (long long i = 0; i < n; i++)
{
    cin>>arr[i];
}

sort(arr,arr+n);

long long mini=arr[0];
long long maxi=arr[n-1];
long long minicnt=0;
long long maxicnt=0;

long long i=0;
while (arr[i++]==mini)
{
    minicnt++;
}

long long j=n-1;
while (arr[j--]==maxi)
{
    maxicnt++;
}

if(mini==maxi){
    cout<<0<<" "<<(n*(n-1))/2;
}else{
    cout<<arr[n-1]-arr[0]<<" "<<maxicnt*minicnt;
}

return 0;
}