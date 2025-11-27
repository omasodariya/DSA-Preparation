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
    int n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll minv=v[0]-k;
    ll maxv=v[0]+k;
    ll minn;
    ll maxn;
    ll cnt=0;
    for(int i=1;i<n;i++){
        minn=v[i]-k;
        maxn=v[i]+k;
        if((maxv>=minn && minn>=minv)||(maxv>=maxn && maxn>=minv)){
            minv=max(minv,minn);
            maxv=min(maxv,maxn);
        }else{
            cnt++;
            maxv=maxn;
            minv=minn;
        }
        cout<<minv<<" "<<maxv<<endl;
    }
    cout<<cnt<<endl;

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