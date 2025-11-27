#include<iostream>
using namespace std;

class Solution {
public:
int pow(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
        ans *= a;
    return ans;
}
    int bianary(int n) {
        int dn=0;
        for(int i=0;n!=0;i++,n=n>>1){
            dn+=pow(10,i)*(n%2);
        }
        return dn;
    }
    int compliment(int dn){
    int ddn=0;
for (int i = 0;dn; i++,dn/=10)
{
    ddn+=pow(2,i)*!(dn%10);
    }
return ddn;
    }
}s;

int main()
{
    int n;
    cin>>n;
    cout<<s.bianary(n)<<endl;
cout<<s.compliment(s.bianary(n));


return 0;
}
