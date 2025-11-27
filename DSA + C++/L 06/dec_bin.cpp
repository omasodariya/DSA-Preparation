#include <iostream>
using namespace std;

int pow(int a, int b);
class Solution
{
public:
    int revint(int n)
    {
        int dn, ans=0;
        for (int i = 0; n > 0; i++)
        {
            dn = n & 1;
            ans += pow(10,i)*dn;
            n=n>>1;
        }
        return ans;
    }
} s;

int main()
{
    int n;
    cin >> n;
    cout << s.revint(n);
    return 0;
}

int pow(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
        ans *= a;
    return ans;
}