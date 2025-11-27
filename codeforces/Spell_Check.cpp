//------------------------------------------------------------------
#include<iostream>
#define endl '\n'
// #define ll long long
#define outn(n) cout<<n<<endl
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define test(t) while(t--)
// #define fori(i,n) for(int i=0;i<n;i++)
// #define ford(i,n) for(int i=n-1;i>=0;i--)
// #define arrin(arr,n) fori(i,n) cin>>arr[i]
// #define arrout(arr,n) fori(i,n) cout<<arr[i]
// #define arr2din(arr,n,m) fori(i,n) fori(j,m) cin>>arr[i][j]
using namespace std;
//-------------------------------------------------------------------


//*******************************************************************
void solve(){
    int n,t=0,i=0,m=0,u=0,r=0,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    if(n!=5){
        outn("NO");
        return;
    }else{
       for (int j = 0; j < n; j++)
       {
       if (s[j]=='T')
            ++t;
       else if (s[j]=='i')
            ++i;
       else if (s[j]=='m')
            ++m;
       else if (s[j]=='u')
            ++u;
       else if (s[j]=='r')
            ++r;
       }
    }
    if(t==1 && i==1 && m==1 && u==1 && r==1){
        outn("YES");
        return;
    }
        outn("NO");
}
//*******************************************************************



int main()
{
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
  freopen("input.txt",  "r",  stdin);
  freopen("output.txt", "w", stdout);
#endif


int t;
cin>>t;
while(t--){
 solve();
}

return 0;
}