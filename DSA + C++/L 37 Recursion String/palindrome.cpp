#include<bits/stdc++.h>
using namespace std;

bool reverse(string &str,int i,int n){
    if(i>n-i)
    return true;
        if(str[i]!=str[n-i]){
            return false;
        }
        else{
        reverse(str,++i,n);
        }
    return true;
}

int main()
{
string str="abac";

if(reverse(str,0,str.size()-1)){
    cout<<str<<" is palindrome";
}else{
    cout<<str<<" is not palindrome";
}


return 0;
}