#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
int n=s.size();
int cnt=1;

for (int i = 0; i < n-1; i++)
{
    if(s[i]!=s[i+1]){
        cnt=1;
    }else{
        cnt++;
    }
    if(cnt>=7){
        cout<<"YES";
        exit(0);
    }
}
        cout<<"NO";

return 0;
}