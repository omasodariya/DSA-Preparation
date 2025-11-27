// gcd(a,b)=gcd(a-b,b) if anyone zero other is answer
// lcm(a,b)*gcd(a,b)=a*b  //gcd(a,b)=gcd(a%b,b)

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
        {
            if (b == 0)
                return a;

            a = a % b;
        }
        else
        {
            if (a == 0)
                return b;
            b = b % a;
        }
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    cout << "GCD of " << a << " & " << b << " is: " << gcd(a, b);

    return 0;
}