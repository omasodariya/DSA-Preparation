#include <bits/stdc++.h>
#define ll long long int
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl "\n"
#define GCD __gcd
using namespace std;


void solve() {
    ll n;
    cin>>n;
    if(n&1 || n<4)
    cout<<-1<<endl;
    else
    cout<<n/6+((n%6)!=0?1:0)<<" "<<n/4<<endl;
    
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