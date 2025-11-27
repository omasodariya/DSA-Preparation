//------------------------------------------------------------------
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
//-------------------------------------------------------------------


//*******************************************************************
void solve(){
int n,cnt=0;
cin>>n;
while(n!=1){
    if(n%6==0){
        cnt++;
        n/=6;
    }else if(n%3==0){
        cnt++;
        n*=2;
    }else{
        cout<<"-1"<<endl;
        return;
    }
}
cout<<cnt<<endl;
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