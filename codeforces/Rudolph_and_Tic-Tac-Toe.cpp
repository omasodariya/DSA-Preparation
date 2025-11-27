//------------------------------------------------------------------
#include<bits/stdc++.h>
#define endl '\n'
#define outn(n) cout<<n<<endl
#define test(t) while(t--)
#define fori(i,n) for(int i=0;i<n;i++)
#define ford(i,n) for(int i=n-1;i>=0;i--)
#define arrin(arr,n) fori(n) cin>>arr[i]
#define arrout(arr,n) fori(n) cout<<arr[i]
#define arr2din(arr,n,m) fori(i,n) fori(j,m) cin>>arr[i][j]
using namespace std;
//-------------------------------------------------------------------

//*******************************************************************
void solve(){
char arr[3][3];
arr2din(arr,3,3);

fori(i,3){
    if (arr[i][0]==arr[i][1] && arr[i][1]==arr[i][2])
    {
        if(arr[i][0]!='.'){
            outn(arr[i][0]);
            goto iteration;
        }
    }
    
}
fori(i,3){
    if (arr[0][i]==arr[1][i] && arr[1][i]==arr[2][i])
    {
        if(arr[0][i]!='.'){
            outn(arr[0][i]);
            goto iteration;
        }
    }
    
}

 if ((arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2])||(arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0]))
    {
        if(arr[1][1]!='.'){
            outn(arr[1][1]);
            goto iteration;
        }
    }

    cout<<"DRAW"<<endl;


iteration: ;
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