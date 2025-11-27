//------------------------------------------------------------------
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
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
    // ll n,k;
    // cin>>n>>k;
    // ll arr[n],sum=0,min=LLONG_MAX,minIndex;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    //         sum+=arr[i];
    //     if(i>=k-1){ 
    //     if(sum<min){
    //         min=sum;
    //         minIndex=i-k+2;
    //         // cout<<sum<<" "<<i<<" "<<minIndex<<endl;
    //     }
    //         sum-=arr[i-k+1];
    //     }
    // }
    // outn(minIndex);
    
     int n,k,sum=0,temp=INT_MAX,ind=1;
    cin>>n>>k; 
    int arr[150000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(i>k-1){
            sum-=arr[i-k];
        }
        if(sum <= temp && i>=k-1){
            temp = sum;
            ind = i-k+2;
        }
    }
    cout<<ind;  

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

 solve();

cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
return 0;
}

