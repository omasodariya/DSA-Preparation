//------------------------------------------------------------------
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define outn(n) cout<<n<<endl
#define test(t) while(t--)
#define fori(i,n) for(int i=0;i<n;i++)
#define ford(i,n) for(int i=n-1;i>=0;i--)
#define arrin(arr,n) fori(n) cin>>arr[i]
#define arrout(arr,n) fori(n) cout<<arr[i]
#define arr2din(arr,n,m) fori(i,n) fori(j,m) cin>>arr[i][j]
using namespace std;
//-------------------------------------------------------------------

ll power(ll a,ll b){
    
    while (--b)
    {
        a=a*a;
    }
    return a;
}


//*******************************************************************
void solve(){
ll n;
cin>>n;
if(n<=9){
outn(n);
return;
}

ll digit=log10(n)+1;
ll f=n/(int)(ceil)(pow(10,digit-1));
ll b=f;

while(digit!=1){
    b=b*10;
    b+=f;
    digit--;
}
digit=log10(n)+1;

if(n>=b)
cout<<(digit-1)*9 +(n/(int)(ceil)(pow(10,digit-1))) <<endl;
else
cout<<(digit-1)*9 + (n/(int)(ceil)(pow(10,digit-1))) -1<<endl;

}
//*******************************************************************



int main()
{
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
  freopen("input.txt",  "r",  stdin);
  freopen("output.txt", "w", stdout);
#endif
 
//   clock_t z = clock();

int t;
cin>>t;
while(t--){
 solve();
}

// cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
return 0;
}