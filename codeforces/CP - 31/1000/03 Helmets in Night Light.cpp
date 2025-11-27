#include <bits/stdc++.h>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl "\n"
#define GCD __gcd
#define all(vec) vec.begin(), vec.end()
#define fori(end) for (ll i = 0; i < end; i++)
#define forj(end) for (ll j = 0; j < end; j++)
#define MOD 1000000007
#define arrin(arr, end) \
    fori(end) { cin >> arr[i]; }
#define arrout(arr, end) \
    fori(end) { cout << arr[i] << " "; }
using namespace std;

bool compare(pair<int,int> &a,pair<int,int> &b){
    if(a.second<b.second){
        return true;
    }else if(a.second==b.second){
        return a.first>b.first;
    } 
        return false;
    
}

void solve()
{
	long long n,k;
    cin>>n>>k;
    vector<pair<int,int>> vp(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vp[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin>>vp[i].second;
    }
    if(n==1){
        cout<<k<<endl;
        return;
    }
    sort(all(vp),compare);
    long long ans=k;
    long long cnt=1;
    long long i=0;
    while(cnt<n){

        if(cnt+vp[i].first>=n){
            ans+=(n-cnt)*(k<=vp[i].second?k:vp[i].second);
            break;
        }
        ans+=(vp[i].first*(k<=vp[i].second?k:vp[i].second));
        cnt+=vp[i].first;
        i++;
    }
    cout<<ans<<endl;
    
    return;
}


//************************************************************************************************//

int main()
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