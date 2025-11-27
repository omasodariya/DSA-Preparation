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
    long long n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k <= n / 2)
            cout << 2 * k - 1 << endl;
        else
            cout << (k - n/2)*2 << endl;
    }
    else{
        if (k <= (n + 1)/ 2)
            cout << 2 * k - 1 << endl;
        else
            cout << (k-1 - n/2)*2 << endl;

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