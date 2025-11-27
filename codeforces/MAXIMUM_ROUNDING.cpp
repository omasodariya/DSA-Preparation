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
void tochange(int n, string &x, char c)
{
    int last=n-1;
    for (int i = n - 1; i >= 0; i--)
    {
          if (x[i] >= '9'){
            last=i;
            x[i]='0';
            if(i==0)
           c = '1';
           else
           x[i - 1] = char(x[i - 1] + 1);
          }
        if (x[i] >= '5')
        {
            last=i;
            if (i == 0)
            {
                c = '1';
            }
            else
            {
                    x[i - 1] = char(x[i - 1] + 1);
            }
            x[i] = '0';
        }
    }
    for(int i=last+1;i<n;i++){
        x[i]='0';
    }
    if (c != '\0')
    {
        x = c + x;
    }
}

//*******************************************************************
void solve()
{
    char c = '\0';
    string x;
    cin >> x;
    int n = x.size();
    tochange(n, x, c);
    cout << x << endl;
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

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}