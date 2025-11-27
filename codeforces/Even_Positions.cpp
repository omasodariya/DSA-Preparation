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
    int n;
    cin>>n;
    string str;
    cin>>str;
    int index=n-1;
    int cnt=0;
    for (int i = n-2; i>0; i-=2)
    {
        if(str[i-1]==')'){
            cnt+=index-i;
            index=i-1;
        }else{
            cnt++;
        }
    }
    cnt+=index;
    cout<<cnt<<endl;
    
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