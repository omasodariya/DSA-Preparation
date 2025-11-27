//------------------------------------------------------------------
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define outn(n) cout<<n<<endl
#define test(t) while(t--)
#define fori(i,n) for(int i=0;i<n;i++)
#define ford(i,n) for(int i=n-1;i>=0;i--)
#define arrin(arr,n) fori(n) cin>>arr[i]
#define arrout(arr,n) fori(n) cout<<arr[i]
#define arr2din(arr,n,m) fori(i,n) fori(j,m) cin>>arr[i][j]
using namespace std;
//-------------------------------------------------------------------


//*******************************************************************
void solve(){
int n;
cin>>n;
int a;
vector<pair<int ,int>> v(n);
v[0].first=1;
for (int i = 0; i < n; i++)
{
    cin>>a;
    if(i==0)
    v[i].second=a;
    else{
    v[i].first=v[i-1].second+1;
    v[i].second=v[i-1].second+a;
    }
}

int m;
cin>>m;

vector<pair<int,int>> q(m);
for (int i = 0; i < m; i++)
{
cin>>q[i].first;
q[i].second=i;
}
sort(q.begin(),q.end());

vector<int> ans(m);
for (int i = m-1,j=n-1 ;i>=0 && j>=0; i--)
{
    while(v[j].first > q[i].first){
        j--;
    }
    ans[q[i].second]=j+1;
}
for (int i = 0; i < m; i++)
{
    cout<<ans[i]<<endl;
}


}
//*******************************************************************



int main()
{
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
  freopen("input.txt",  "r",  stdin);
  freopen("output.txt", "w", stdout);
#endif
 
//   clock_t z = clock();

int t=1;
// cin>>t;
while(t--){
 solve();
}

// cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
return 0;
}