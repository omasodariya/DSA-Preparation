#include <bits/stdc++.h>
#define int long long int
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl "\n"
using namespace std;


void solve() {
    int n,k,q;
    cin>>n>>k>>q;
    int cnt=0;
    int cons=0;
    int mxcons=0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        if(a<=q) cnt++,cons++;
        else{
        if(cons>=k)    
        v.push_back(cons);
        cons=0;
        } 
        mxcons=max(mxcons,cons);

    }
        v.push_back(cons);
        mxcons=max(mxcons,cons);
    if(cnt<k || mxcons<k){
        cout<<0<<endl;
    }else{
        int s=v.size();
        int ans=0;
        for (int i = 0; i <s ; i++)
        {
            if(v[i]>=k){
                ans+=((v[i]-k+1)*(v[i]-k+2))/2;
            }
        }
        cout<<ans<<endl;
    }

} 


signed main()
{
    fast
    int tests = 1;
    cin >> tests;

    while (tests--)
    {
        solve();
    }
    return 0;
}