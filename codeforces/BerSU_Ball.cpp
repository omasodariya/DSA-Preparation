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
int diff(int a,int b){
    if(a>b)
    return a-b;
    else
    return b-a;
}

//*******************************************************************
void solve(){
    int n,m;
    cin>>n;
    int boys[n],cnt=0;
    arrin(boys,n);
    cin>>m;
    int girls[m];
    arrin(girls,m);
    sort(boys,boys+n);
    sort(girls,girls+m);
    int j=m-1;
    for (int i = n-1; i>=0 && j>=0;)
    {
        if(diff(boys[i],girls[j])<=1){
            i--;
            j--;
            cnt++;
        }else if(boys[i]>girls[j]){
            i--;
        }else{
            j--;
        }
    }
    outn(cnt);
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