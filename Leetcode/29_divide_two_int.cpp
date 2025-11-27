#include<iostream>
using namespace std;

class Solution
{
public:
    int fun(int dividend, int divisor)
    {
        int ans= 0;
        while (dividend >= divisor)
        {
            dividend -= divisor;
            ans++;
        }
        return ans;
    }
    int divide(int dividend, int divisor)
    {
      
        if (dividend > 0)
        {
            if (divisor > 0)

               return fun(dividend, divisor);

            else

               return -fun(dividend, -divisor);
        }
        else
        {
            if (divisor < 0)

               return fun(-dividend, -divisor);

            else

               return -fun(-dividend, divisor);
        }
    }
};

int main()
{
    Solution a1;
    int a,b;
    cin>>a>>b;
    int ans=a1.divide(a,b);
cout<<ans;

return 0;
}