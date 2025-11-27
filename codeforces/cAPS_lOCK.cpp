#include<bits/stdc++.h>
using namespace std;

char CharSwap(char &c){
    if(c>90)
    c-=32;
    else
    c+=32;
    return c;
}

int main()
{
string s;
cin>>s;
int n=s.size();
int cnt=0,upcnt=0;
if(s[0]<97){
    upcnt++;
}
for (int i = 1; i < n; i++)
{
    if(s[0]>90 && s[i]<97){
        cnt++;
    }
    if (s[i]<97)
    {
        upcnt++;
    }
    
}
// cout<<upcnt<<" "<<n<<endl;
bool flag=false;
if(upcnt==n||cnt==n-1)
flag=true;
if (flag)
{
    for (int i = 0; i < n; i++)
    {
        CharSwap(s[i]);
    }
    
}
    cout<<s<<endl;

return 0;
}