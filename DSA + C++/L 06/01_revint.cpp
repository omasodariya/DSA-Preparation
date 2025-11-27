#include <iostream>
#include <climits>
using namespace std;

class Solution
{
public:
   int revint(int n)
    {
        int dn = 0;
       
        for (int i = 0; n!=0; i++, n /= 10)
        {
            if ((dn>(INT_MAX/10))||dn<(INT_MIN/10))
                return 0;    
            dn *= 10;
            dn += n % 10;
        }        
        return dn;
      
}

} s;

int main()
{
    int n;
    cin >> n;
    cout << s.revint(n);

    return 0;
}