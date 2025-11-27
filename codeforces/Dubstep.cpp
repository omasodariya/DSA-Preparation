#include<bits/stdc++.h>
using namespace std;

int main()
{
string s="",str;
int cnt=0;
cin>>str;
if(str.size()<3){
    cout<<str;
    return 0;
}
int i = 0;
for (; i < str.size()-2; i++)
{
    if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B'){
        if(cnt!=0){
            s+=" ";
        }
        cnt=0;
        i+=2;
    }else {
        s+=str[i];
        cnt++;
    }
}
if(i!=str.size()){
s+=str[i];
if(i==str.size()-2)
s+=str[i+1];
}
cout<<s<<endl;
return 0;
}