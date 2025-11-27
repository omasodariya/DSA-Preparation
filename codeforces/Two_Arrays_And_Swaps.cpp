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
void swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}

//*******************************************************************
void solve(){
int n,k,sum=0;
cin>>n>>k;
int a[n],b[n];
fori(i,n){
    cin>>a[i];
}
fori(i,n){
    cin>>b[i];
}
sort(a,a+n);
sort(b, b + n, greater<int>());

for (int i = 0; i < n; i++)
{
    if(i<k){
        a[i]=max(a[i],b[i]);
    }
    sum+=a[i];
}
outn(sum);
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