#include<iostream>
using namespace std;

char to_lower(char c){
    return c+32;
}

int main(){
    string str;
    cin>>str;
    string ans="";
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='i'||str[i]=='I'||str[i]=='O'||str[i]=='o'||str[i]=='u'||str[i]=='U'||str[i]=='Y'||str[i]=='y'){
            continue;
        }

        ans+=".";
        if(str[i]<97)
        ans+=str[i]+32;
        else
        ans+=str[i];
    }
    cout<<ans;
    return 0;
}