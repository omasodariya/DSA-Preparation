#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;

map<string,string> mp;

for (int i = 0; i < m; i++)
{
string key,val;
 cin>>key;   
 cin>>val;  
 mp[key]=val; 
}

for (int i = 0; i < n; i++)
{
    string str;
    cin>>str;
    if(str.size()<=mp[str].size()){
        cout<<str<<" ";
    }else{
        cout<<mp[str]<<" ";
    }
}




return 0;
}