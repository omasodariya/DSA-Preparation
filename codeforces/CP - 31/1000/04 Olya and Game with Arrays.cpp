#include <bits/stdc++.h>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl "\n"
#define GCD __gcd
#define int long long
#define yes cout<<"YES"<<endl
#define all(vec) vec.begin(), vec.end()
#define fori(end) for (ll i = 0; i < end; i++)
#define forj(end) for (ll j = 0; j < end; j++)
#define MOD 1000000007
#define arrin(arr, end) \
    fori(end) { cin >> arr[i]; }
#define arrout(arr, end) \
    fori(end) { cout << arr[i] << " "; }
using namespace std;


void solve()
{
	int n;
    cin>>n;
    vector<pair<int,int>> vp(n);
    // int t=n;
    int minall=INT_MAX;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int arr[m];
        int mini=INT_MAX;
        int minidx=0;
        for (int j = 0; j < m; j++)
        {
            cin>>arr[j];
            minall=min(minall,arr[j]);
            if(mini>arr[j]){
                mini=arr[j];
                minidx=j;
            }
        }
        vp[i].first=mini;
        int min2=INT_MAX;
        for (int j = 0; j < m; j++)
        {
            if(j!=minidx){
                min2=min(min2,arr[j]);
            }
        }
        vp[i].second=min2;
    }
    int sum=minall;
    int minf=INT_MAX;
    for(auto i:vp){
        sum+=i.second;
        minf=min(minf,i.second);
    }
    sum-=minf;
    cout<<sum<<endl;
    
    return;
}


//************************************************************************************************//

signed main()
{
    fast
    long long tests = 1;
    cin >> tests;

    while (tests--)
    {
        solve();
    }
    return 0;
}