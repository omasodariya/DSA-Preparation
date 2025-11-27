#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

int n=6;

for (int i = 1; i <= n; i++)
{
    for (int j=i; j <= i+i; j++)
    {
       cout<<setw(3)<<j;
    }
    cout<<endl;
}


return 0;
}
