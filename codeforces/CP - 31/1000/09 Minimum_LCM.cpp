#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while (t--)
{
    int a;
    cin>>a;
    int b=a-1;
    if(a&1){
        for (int i = 2; i*i <= a; i++)
        {
            if(a%i==0){
                b=a/i;
                break;
            }
        }
        cout<<b<<" "<<a-b<<endl;
    }else{
        cout<<a/2<<" "<<a/2<<endl;
    }
}


return 0;
}