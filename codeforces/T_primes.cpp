#include<bits/stdc++.h>
using namespace std;

int arr[1000001]={1,1};



int main()
{
    for (long long i = 2; i*i < 1000001; i++)
    {
       if (!arr[i])
       {
        for (long long j = i*i; j < 1000001; j+=i)
        {
        arr[j]=1;
        }
       }
    }
    

int t;
cin>>t;
for (long long i = 0; i < t; i++)
{
    long long n;
    cin>>n;
    long long sq=sqrt(n);
    if(!arr[sq] && sq*sq==n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;

    }
}



return 0;
}