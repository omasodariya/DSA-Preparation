class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i,ans,a=n,dn=0;
for (i = 0;a!=0; i++)
{
    a=a>>1;
dn=(dn<<1)|1;
}
dn>>=1;
return dn==n-1;
}
  
};