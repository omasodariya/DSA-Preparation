#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    while (b--)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int x;
    cin >> x;
    int loopcnt = log2(x);
    int cnt = 0;
    if (x == power(2, loopcnt))
    {
        cout << 1 << endl;
    }
    else
    {

        for (int i = loopcnt; i >= 0; i--)
        {
            if (x % power(2, i) != 0 && x / power(2, i) != 0)
            {
                cnt++;
            }
            else if (x == 0)
            {
                break;
            }

            x %= power(2, i);
        }
        cout << cnt + 1 << endl;
    }

    return 0;
}