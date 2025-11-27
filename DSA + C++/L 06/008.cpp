#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
char op,a,b;
cin>>op;
cout<<"A"<<" B:";
cin>>a>>b;
switch (op)
{
case '+':
    cout<<a+b;
    break;

case '-':
    cout<<a-b;
    break;

case '*':
    cout<< a*b;
    break;

case '/':
    cout<< a/b;
    break;

}

return 0;
}