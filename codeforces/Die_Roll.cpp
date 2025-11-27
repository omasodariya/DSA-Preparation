//------------------------------------------------------------------
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
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
    int a, b;
    cin >> a >> b;
    if (max(a, b) == 6)
    {
        cout << "1/6";
    }
    else if (max(a, b) == 5)
    {
        cout << "1/3";
    }
    else if (max(a, b) == 4)
    {
        cout << "1/2";
    }
    else if (max(a, b) == 3)
    {
        cout << "2/3";
    }
    else if (max(a, b) == 2)
    {
        cout << "5/6";
    }
    else 
    {
        cout << "1/1";
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