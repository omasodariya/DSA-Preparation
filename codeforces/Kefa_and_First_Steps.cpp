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
int n,cnt=1,maxcnt=0;
cin>>n;
int arr[n];
fori(i,n){
    cin>>arr[i];
    if(i>=1){
        if (arr[i]>=arr[i-1])
        {
            cnt++;
        }
        else{
            cnt=1;
        }
    }
    if(cnt>maxcnt){
        maxcnt=cnt;
    }
}
outn(maxcnt);
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