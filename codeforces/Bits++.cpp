#include<iostream>
using namespace std;

int main()
{
int t,X=0;
string str;
cin>>t;

while (t--)
{
    cin>>str;
    if (str=="++X")
        ++X;
    if (str=="X++")
        X++;
    if (str=="--X")
        --X;
    if (str=="X--")
        X--;
    
}
cout<<X;

return 0;
}