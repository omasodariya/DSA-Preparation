//------------------------------------------------------------------
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define outn(n) cout << n << endl
#define test(t) while (t--)
// #define fori(i,n) for(int i=0;i<n;i++)
#define fori(n) for (int i = 0; i < n; i++)
#define ford(i, n) for (int i = n - 1; i >= 0; i--)
#define strin(str, n) fori(n) cin >> str[i]
#define strout(str, n) fori(n) cout << str[i] << " "
#define str2din(str, n, m) fori(i, n) fori(j, m) cin >> str[i][j]
using namespace std;
//-------------------------------------------------------------------

//*******************************************************************
void solve()
{
    int m, n;
    cin >> m >> n;
    string str[m];
    int ub = 0, uw = 0, db = 0, dw = 0, lb = 0, lw = 0, rb = 0, rw = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> str[i];
    }
    if (str[0][0] == str[m - 1][n - 1] || str[m - 1][0] == str[0][n - 1])
    {
        yes;
        return;
    }
    if ((m == 1 || n == 1))
    {
        if (str[0][0] == str[m - 1][n - 1] || str[m - 1][0] == str[0][n - 1])
        {
            yes;
            return;
        }
        else
        {
            no;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {

        if (str[0][i] == 'B')
            ub++;
        else
            uw++;

        if (str[m - 1][i] == 'B')
            db++;
        else
            dw++;
    }

    for (int i = 0; i < m; i++)
    {

        if (str[i][0] == 'B')
            lb++;
        else
            lw++;

        if (str[i][n - 1] == 'B')
            rb++;
        else
            rw++;
    }

        if ((str[0][0] == 'W' && rw > 0 && dw > 0)||(str[m - 1][n - 1] == 'B' && ub > 0 && lb > 0)||(str[0][0] == 'B' && rb > 0 && db > 0)||(str[m - 1][0] == 'W' && uw > 0 && rw > 0)||(str[m - 1][0] == 'B' && ub > 0 && rb > 0)||(str[0][n - 1] == 'W' && dw > 0 && lw > 0)||(str[0][n - 1] == 'B' && db > 0 && lb > 0)||(str[m - 1][n - 1] == 'W' && uw > 0 && lw > 0))
        {
            yes;
            return;
        }

    no;
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

    //   clock_t z = clock();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}