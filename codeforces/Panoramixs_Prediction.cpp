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

int prime(int a){
            // yes;
    for (int i = 2; i*i <= a; i++)
    {
        if(a%i==0){
            return 0;
        }
    }
    // yes;
    return 1;
}

//*******************************************************************
void solve(){
    int n,m;
    cin>>n>>m;
    for (int i = n+1; i <= m; i++)
    {
        if(prime(i)){
            if(i==m){
            yes;
            return;
            }
            no;
            return;
        }
    }
    no;

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

int t=1;
// cin>>t;
while(t--){
 solve();
}

cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
return 0;
}