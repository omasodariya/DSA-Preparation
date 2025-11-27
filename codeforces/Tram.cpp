#include<iostream>
using namespace std;

int main()
{
int n,max=0,temp=0;
cin>>n;

for (int i = 0; i < n ; i++)
{
    int a,b;
    cin>>a>>b;
    if (temp+b-a>max)
    {
        max=temp+b-a;
    }
        temp=temp+b-a;
}

cout<<max;
return 0;
}