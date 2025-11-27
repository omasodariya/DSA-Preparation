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
    int n,digit,no=0;
    cin>>n;
    digit=log10(n);
    int arr[digit]={0};
    if (n%int(pow(10,digit))==0)
    {
      outn(1);
      outn(n);
    }else
    {
        for (int i = 0; i < digit+1; i++)
        {
            if (n%10!=0)
            {
                no++;
            }
            arr[i]=n%10;
            n=n/10;
        }
        outn(no);
        for (int i = 0; i < digit+1; i++)
        {
            if (arr[i]!=0)
            {
                cout<<pow(10,i)*arr[i]<<" ";
            }
        }
        cout<<endl;
        
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

int t;
cin>>t;
while(t--){
 solve();
}

cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
return 0;
}