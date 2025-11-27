#include<iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
        for(int i=1;i<=32;i++,n/=10)
            if((n%10)==1)
                c++;
    return c;
    }
}s;

int main()
{
    int n;
    cin>>n;
cout<<s.hammingWeight(n);


return 0;
}