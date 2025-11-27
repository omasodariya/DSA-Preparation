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
  int n,k;
  cin>>n>>k;
  vector<ll> v(n);
  for (int i = 0; i < n; i++)
  {
        cin>>v[i];
  }
    sort(v.begin(),v.end());
    int cnt=0;
    ll sum=0;
    int i=0;
    int j=n-1;
    int mx=v[j];
    while(i<=j){
        if(sum+mx>k){
            cnt++;
            mx=v[j-1];
            sum=0;
            j--;
        }else{
            sum+=mx;
            i++;
        }
    }

    cout<<cnt<<endl;
} 

int main()
{
    fast
    ll tests = 1;
    // cin >> tests;

    while (tests--)
    {
        solve();
    }
    return 0;
}