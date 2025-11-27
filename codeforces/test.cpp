
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, ld, lsd, digit, t;
//     cin >> n;
//     t = -n;
//     if (n >= 0)
//         cout << n;
//     else
//     {
//         digit = log10(t);
//         if (digit == 1)
//         {
//             ld = n % 10;
//             lsd = n / 10;
//         }
//         else
//         {
//             ld = -(t /10);
//             lsd = -((t / 100)*10 + ((t) % 10));
//         }
//         cout << max(ld, lsd);
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n;
    n = s.size();
    int t;
    cin >> t;
    int all = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            all++;
        }
    }
    if (all != 0 && all<n-1)
    {
        while (t--)
        {
            int a, b, ans = 0;
            cin >> a >> b;

            for (int i = a - 1; i < b - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }
    else if(all=n-1)
    {
            int a, b, ans = 0;
        while(t--){
            cin >> a >> b;
            cout<<b-a<<endl;
        }
    }else{

        while(t--){
            int a, b, ans = 0;
            cin >> a >> b;
            cout<<0<<endl;
        }
    }

    return 0;
}