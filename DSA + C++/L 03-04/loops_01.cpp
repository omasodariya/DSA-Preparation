#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

int n=6;
char k;
for (int i = 1; i <= n; i++)
{
    k=64+i;
    for (int j=1; j <=n ; j++)
    {
       cout<<setw(3)<<k;
    }
    cout<<endl;
}


return 0;
}
