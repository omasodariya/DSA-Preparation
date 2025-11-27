//------------------------------------------------------------------
#include <bits/stdc++.h>
#define endl '\n'
#define outn(n) cout << n << endl
#define test(t) while (t--)
#define fori(i, n) for (int i = 0; i < n; i++)
#define ford(i, n) for (int i = n - 1; i >= 0; i--)
#define arrin(arr, n) fori(i, n) cin >> arr[i]
#define arrout(arr, n) fori(i, n) cout << arr[i]
#define arr2din(arr, n, m) fori(i, n) fori(j, m) cin >> arr[i][j]
using namespace std;
//-------------------------------------------------------------------

//*******************************************************************
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 1)
    {
        if (b == 1)
        {
            if (c == 1)
                outn(3);
            else
                outn(2 * c);
        }
        else
        {
            if (c == 1)
                outn(2 + b);
            else
                outn((1 + b) * c);
        }
    }
    else
    {
        if (b == 1)
        {
            if (c == 1)
                outn(2 + a);
            else
                outn(max(((1 + a) * c), (1 + c) * a));
        }
        else
        {
            if (c == 1)
                outn((1 + b) * a);
            else
                outn((a * b) * c);
        }
    }
}
//*******************************************************************

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();

    solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}