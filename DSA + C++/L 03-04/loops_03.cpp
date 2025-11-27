#include<iostream>
using namespace std;

int main()
{
    int n=5;
for (int i = 0; i < n; i++)
{
    for (int j = 1; j <= n; j++)
    {
        if (j<=n-i)
        cout<<j;
        else
        cout<<"*";
    }
    for (int k =n; k>0; k--)
    {
        if (k<=n-i)
        cout<<k; 
        else
        cout<<"*";
    }
    cout<<endl;
}


return 0;
}