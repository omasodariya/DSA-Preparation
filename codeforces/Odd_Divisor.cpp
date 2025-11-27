#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    long long t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n & 1)
        {
            cout << "YES" << endl;
        }
        else if(n%3==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool flag = true;
            while (n > 0)
            {
                n /= 2;
                if (n&1 && n!=1)
                {
                    cout << "YES" << endl;
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout <<"NO"<< endl;
        }
    }

    return 0;
}