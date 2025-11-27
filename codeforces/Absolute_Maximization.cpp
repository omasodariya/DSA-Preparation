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
    int n,degit;
    cin>>n;
    int arr[n],maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        maxi=max(arr[i],maxi);
    }
    if(maxi!=0)
    degit=log2(maxi)+1;
    else
    degit=1;
    vector<int> maxa(degit,0),mina(degit,1);
    for(int i=0;i<n;i++){
        int j=0;
        while(arr[i]>0 && j<degit){
            if(arr[i]&1)
            maxa[j]=1;
            else
            mina[j]=0;
            arr[i]=arr[i]>>1;
            j++;
        }
        while(j<degit){
            mina[j++]=0;
        }
    }
    int maxval=0,minval=0;
    for (int i = degit-1; i >= 0; i--)
    {
        maxval=maxval<<1;
        minval=minval<<1;
        maxval=maxval|maxa[i];
        minval=minval|mina[i];
    }
    cout<<maxval-minval<<endl;

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