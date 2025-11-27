#include <bits/stdc++.h>
#define ll long long int
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl "\n"
using namespace std;


void solve() {
    int a,b,n;
    cin>>a>>b>>n;
    ll ans=b;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        ans+=(t)>=a?a-1:t;
    }
    cout<<ans<<endl;
    
} 

int main()
{
    fast
    ll tests = 1;
    cin >> tests;

    while (tests--)
    {
        solve();
    }
    return 0;
}