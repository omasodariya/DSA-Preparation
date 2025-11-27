#include<iostream>
using namespace std;
class Solution {
public:
int comp(int n){
int i,a,dn=0,ans;
a=n;
for (i = 0;a!=0; i++)
{
    a=a>>1;
dn=dn<<1;
dn=dn|1;
}
ans=(dn)&(~n);
return ans;
}
}s;

int main()
{
int n;
cin>>n;
cout<<s.comp(n);

return 0;
}