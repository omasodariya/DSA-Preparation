#include<bits/stdc++.h>
using namespace std;

string convert(string s){
    string ans="";
    int n=s.size();
    for (int i = 0; i < n; i++)
    {
    if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='1'&&s[i]<='9')){
        ans+=tolower(s[i]);
    }
    }
    
    return ans;
}

int main()
{
string s="0 ";

s=convert(s);
cout<<s;

return 0;
}