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
int n,k;
cin>>n>>k;
if(n<=k){
    outn(1);
}else{
  int maxi=1;
  for (int i = 2; i <= n/i && i<=k; i++)
  {
    if(n%i==0){
    maxi=max(i,maxi);
     if(n/i <= k)
    maxi=max(n/i,maxi);

    }
  }
  outn(n/maxi);
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

int t;
cin>>t;
while(t--){
 solve();
}

// cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
return 0;
}