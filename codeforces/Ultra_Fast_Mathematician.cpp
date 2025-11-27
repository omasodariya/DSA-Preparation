#include<iostream>
using namespace std;

int main(){
    string str,str1;
    cin>>str>>str1;
    for(int i=0;i<str.size();i++){
        if(str[i]==str1[i]){
            str[i]='0';
        }
        else{
            str[i]='1';
        }
    }
    cout<<str;
    return 0;
}