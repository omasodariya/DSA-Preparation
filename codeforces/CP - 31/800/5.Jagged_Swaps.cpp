#include<bits/stdc++.h>
using namespace std;

void solve(){
      int n;
    cin>>n;
    vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
    cin>>v[i];
   }
   if(v[0]!=1){
    cout<<"NO"<<endl;
   }else{
    cout<<"YES"<<endl;
   }
}

int main()
{
int t;
cin>>t;
while(t--){
  
  solve(); 
   
}

return 0;
}