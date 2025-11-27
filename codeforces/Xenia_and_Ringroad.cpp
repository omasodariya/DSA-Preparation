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
int m,n,x=1,steps=0;
cin>>m>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    
    if (x<arr[i])
    {
        steps+=arr[i]-x;
        x=arr[i];
    }else if(x>arr[i]){
        steps+=(m-x+arr[i]);
        x=arr[i];
    }
    
}

outn(steps);
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