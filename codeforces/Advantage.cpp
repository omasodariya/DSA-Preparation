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


//*******************************************************************
void solve(){
    int n;
    cin>>n;
    int v[n],c[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        c[i]=v[i];
    }
    sort(c,c+n);
    for(int i=0;i<n;i++){
        if(v[i]==c[n-1])
        cout<<c[n-1]-c[n-2]<<" ";
        else
        cout<<v[i]-c[n-1]<<" ";
    }
    cout<<endl;
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

// cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
return 0;
}