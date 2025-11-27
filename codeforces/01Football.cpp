#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
map<string,int> mp;

while (n--)
{
    string s;
    cin>>s;
    mp[s]++;
}

int maxi=0;
string ans;
for(auto x:mp){
    if(x.second>maxi)
    {
        maxi=x.second;
        ans=x.first;
    }
}
cout<<ans;

return 0;
}