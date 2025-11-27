#include<iostream>
using namespace std;

int main()
{
int a,b,comp,reuse,rem=0;
cin>>a>>b;
comp=a;
rem=a;
for (;rem>=b ;)
{
   a=(rem/b);
    rem=(rem%b)+a;
    comp+=a;
}
cout<<comp;

return 0;
}