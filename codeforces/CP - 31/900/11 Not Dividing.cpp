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
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        v[i]++;
    }
    int cnt=0;
    for (int i = 1; i < n; i++)
    {
        if(v[i]%v[i-1] ==0){
            v[i]++;
        }
    }
        for (int i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }
    cout<<endl;
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