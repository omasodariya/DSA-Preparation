#include <bits/stdc++.h>
#define ll long long int
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl "\n"
#define GCD __gcd
#define Vall(vec) vec.begin(), vec.end()
#define fori(end) for (ll i = 0; i < end; i++)
#define forj(end) for (ll j = 0; j < end; j++)
#define MOD 1000000007
#define arrin(arr, end) \
    fori(end) { cin >> arr[i]; }
#define arrout(arr, end) \
    fori(end) { cout << arr[i] << " "; }
using namespace std;


void solve() {
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    if(s<k*b || s>(k*b)+((k-1)*(n))){
        cout<<-1<<endl;
    }else{
        s-=k*b;
        cout<<(k*b)+min(s,k-1)<<" ";
        s-=min(s,k-1);
        int cnt=0;
        while (s>0)
        {
            if(s>=k-1)
            cout<<k-1<<" ";
            else
            cout<<s<<" ";
            s-=(k-1);
            cnt++;
        }
        for (int i = 0; i < n-cnt-1; i++)
        {
            cout<<"0"<<" ";
        }
        cout<<endl;
        
    }    
    
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