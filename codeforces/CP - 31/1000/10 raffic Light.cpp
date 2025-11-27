#include <bits/stdc++.h>
#define ll long long int
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl "\n"
using namespace std;


void solve() {
    int n;
    cin>>n;
    char ch;
    cin>>ch;
    string s;
    cin>>s;
    s+=s;
    int lastch=-1;
    int currch=-1;
    bool flag=true;
    bool flagch=false;
    int ans=0;
    for (int i = 0; i < 2*n; i++)
    {
        if(ch==s[i]){
            flagch=true;
            if(flag) currch=i,flag=false;
        }
        if(s[i]=='g'&& flagch){
            flagch=false;    
            flag=true;
            ans=max(ans,i-currch);
        }
    }
    cout<<ans<<endl;
} 

int main()
{
    fast
    ll tests = 1;
    cin >> tests;

    while (tests--)
    {
        solve();
    }
    return 0;
}