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
int z=0,max=0;
int n,arr[3];
cin>>n>>arr[0]>>arr[1]>>arr[2];
sort(arr,arr+3);

for (int i = 0; i <= 4000; i++)
{
  for (int j = 0; j <= 4000; j++)
  {
    if((arr[0]*i+arr[1]*j)>n)
    break;
    if((n-(arr[0]*i+arr[1]*j))%arr[2]==0){
    z=(n-(arr[0]*i+arr[1]*j))/arr[2];
    if(max<i+j+z){
        max=i+j+z;
    }
    }
  }
}

cout<<max;
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