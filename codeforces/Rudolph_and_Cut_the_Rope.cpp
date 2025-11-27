#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while (t--)
{
    int n,cnt=0;
    cin>>n;
    int a,b;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if(a>b){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}


return 0;
}