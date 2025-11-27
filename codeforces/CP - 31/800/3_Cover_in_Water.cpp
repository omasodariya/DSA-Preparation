#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int cnt=0;
    int ans=0;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin>>c;
        if(c=='.'){
            cnt++;
        }else{
            ans+=min(2,cnt);
            cnt=0;
        }
            if(cnt>=3){
                flag=true;
            }
    }
    ans+=min(2,cnt);
    
    if(flag)
    ans=min(2,ans);

    cout<<ans<<endl;
}

return 0;
}