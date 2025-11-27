#include<bits/stdc++.h>
using namespace std;


int main()
{
string s;
int cnt=0,j=0;
cin>>s;

for (int i = 0; i < s.size(); i++)
{    
    if(i!=0 && islower(s[i])){
        cnt++;
    }
}
j=isupper(s[0]);
if(cnt==0){
transform(s.begin(), s.end(), s.begin(), ::tolower);
if(j==0){
s[0]=toupper(s[0]);
}
cout<<s;
}else{
cout<<s;
}


return 0;
}