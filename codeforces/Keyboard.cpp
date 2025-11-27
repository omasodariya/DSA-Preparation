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
char shiftChar(char shift,char ch){
string s="qwertyuiopasdfghjkl;zxcvbnm,./";
for (int i = 0; i < s.size(); i++)
{
    if (shift=='R' && ch==s[i])
    {
        if(ch=='q'||ch=='a'||ch=='z'){
        return ch;
        }
        return s[i-1];
    }
    else if(shift=='L' && ch==s[i]){
        if(ch=='p'||ch==';'||ch=='/'){
        return ch;
        }
        return s[i+1];
    }   
}
}


//*******************************************************************
void solve(){
    char ch;
    cin>>ch;
string s;
cin>>s;
for (int i = 0; i < s.size(); i++)
{
    cout<<shiftChar(ch,s[i]);
}

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