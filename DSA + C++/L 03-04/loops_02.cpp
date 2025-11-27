#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
int n=5,f=0;

for (int i=1; i <= n; i++)
{
    for (int k = 0; k<= n-i; k++)
    {
        cout<<"  ";
    } 
    for (int j=1; j<= i;j++)
    {
        cout<<setw(2)<<j;
    }
    for (int j=i-1; j>0;j--)
    {
        cout<<setw(2)<<j;
    }
    cout<<endl;
}


return 0;
}