#include<iostream>
using namespace std;
class Solution {
public:
    int isPowerOfTwo(int n) {
        int i,ans,a=n,dn=0;
for (i = 0;a!=0; i++)
{
    a=a>>1;
dn=(dn<<1)|1;
}
dn>>=1;
ans=(dn==n-1);
return ans;
}
  
}s;

int main()
{
int n;
cin>>n;
cout<<s.isPowerOfTwo(n);
return 0;
}    