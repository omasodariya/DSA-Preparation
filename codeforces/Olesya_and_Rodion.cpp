#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,t;
cin>>n>>t;

if(n==1 && t>=10){
    cout<<"-1";
}else{
    cout<<t;
    if(n>1){
        for (int i = 0; i < n-2; i++)
        {
            cout<<0;
        }
    }
    if(t<10 && n!=1)
            cout<<0;

    
}

return 0;
}
