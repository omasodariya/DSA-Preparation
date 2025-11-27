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
    int n,ans=0;
    cin >> n;
       
    if (n/100 > 0)
    {
        ans += n / 100;
        n = n % 100;
       
    }
    if (n / 20 > 0)
    {
        ans += n / 20;
        n = n % 20;
      
    }
    if (n / 10 > 0)
    {
        ans += n / 10;
        n = n % 10;
      
    }
 if (n / 5 > 0)
    {
        ans += n / 5;
        n = n % 5;
      
    }
    ans += n;
    cout << ans;
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