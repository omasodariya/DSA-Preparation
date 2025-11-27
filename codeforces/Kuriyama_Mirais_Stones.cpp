//------------------------------------------------------------------
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define outn(n) cout<<n<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define test(t) while(t--)
#define fori(i,n) for(int i=0;i<n;i++)
#define ford(i,n) for(int i=n-1;i>=0;i--)
#define arrin(arr,n) fori(i,n) cin>>arr[i]
#define arrout(arr,n) fori(i,n) cout<<arr[i]
#define arr2din(arr,n,m) fori(i,n) fori(j,m) cin>>arr[i][j]
using namespace std;
//-------------------------------------------------------------------

int arr[100001];
int sarr[100001];

//*******************************************************************
void solve(){
    int q;
    cin>>q;
    int l,r;
    cin>>l>>r;
    if(q==1){
        outn(arr[r]-arr[l-1]);
    }else{
        outn(sarr[r]-sarr[l-1]);
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
 
  clock_t z = clock();
int n;
cin>>n;
vector<int> v(n);
for (int i = 0; i < n; i++)
{
    cin>>v[i];
    arr[i+1]+=arr[i]+v[i];
}

sort(v.begin(),v.end());

for (int i = 0; i < n; i++)
{
    sarr[i+1]+=sarr[i]+v[i];
}


int t;
cin>>t;
while(t--){
 solve();
}

cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
return 0;
}