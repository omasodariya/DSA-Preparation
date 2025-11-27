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


//*******************************************************************
void solve(){
int n;
cin>>n;
int arr[n],sum1=0,sum2=0,fp=0,p1=1,lp=n-1;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];    
}
while(fp<=lp){
if(p1){
    if(arr[fp]>arr[lp]){
sum1+=arr[fp];
fp++;
    }else{
sum1+=arr[lp];
lp--;

    }
p1=0;
}else{
   if(arr[fp]>arr[lp]){
sum2+=arr[fp];
fp++;
    }else{
sum2+=arr[lp];
lp--;

    }
p1=1;
}

}
cout<<sum1<<" "<<sum2;
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