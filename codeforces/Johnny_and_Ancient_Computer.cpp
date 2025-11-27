//------------------------------------------------------------------
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define outn(n) cout << n << endl
#define test(t) while (t--)
#define fori(i, n) for (long long i = 0; i < n; i++)
#define ford(i, n) for (long long i = n - 1; i >= 0; i--)
#define arrin(arr, n) fori(n) cin >> arr[i]
#define arrout(arr, n) fori(n) cout << arr[i]
#define arr2din(arr, n, m) fori(i, n) fori(j, m) cin >> arr[i][j]
using namespace std;
//-------------------------------------------------------------------

long long getCount(long long num){
    long long temp=num;
    long long count=0;
    while (temp>0)
    {   
        if(temp==1)
        break;
        if(temp&1){
            return -1;
        }
        temp=temp>>1;
        count++;
    }
    return count/3 + ((count%3==0)?0:1);
}

//*******************************************************************
void solve()
{
    long long a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << endl;
        return;
    }

    if (a > b)
    {
    long long quotient = a / b;
    long long remainder = a % b;
    if (remainder != 0 || (a % 2 && b % 2))
    {
        // cout<<"YES"<<endl;
        cout << -1 << endl;
        return;
    }
        cout<<getCount(quotient)<<endl;
    }
    else
    {
    long long quotient = b / a;
    long long remainder = b % a;
    if (remainder != 0 || (a % 2 && b % 2))
    {
        cout << -1 << endl;
        return;
    }
        cout<<getCount(quotient)<<endl;
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

    //   clock_t z = clock();

    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}