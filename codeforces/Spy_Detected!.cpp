//------------------------------------------------------------------
#include<bits/stdc++.h>
#define endl '\n'
#define outn(n) cout<<n<<endl
#define test(t) while(t--)
#define fori(i,n) for(int i=0;i<n;i++)
#define ford(i,n) for(int i=n-1;i>=0;i--)
#define arrin(arr,n) fori(i,n) cin>>arr[i]
#define arrout(arr,n) fori(i,n) cout<<arr[i]
#define arr2din(arr,n,m) fori(i,n) fori(j,m) cin>>arr[i][j]
using namespace std;
//-------------------------------------------------------------------


//*******************************************************************
void solve(){
    int n,a,b,c,ans=0;
    cin>>n;
    int arr[n];
    cin>>arr[0]>>arr[1]>>arr[2];
    a=arr[0];
    b=arr[1];
    c=arr[2];

    if(a!=b)
    {
        if(a==c){
            ans=2;
        }
        else{
            ans=1;
        }
    }else{
        if(b!=c){
            ans=3;
        }
    }
    for (int i = 3; i < n; i++)
    {
        cin>>arr[i];
        if(ans==0 && arr[i]!=a){
            ans=i+1;
        }
    }
    cout<<ans<<endl;
    


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

int t;
cin>>t;
while(t--){
 solve();
}

cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
return 0;
}