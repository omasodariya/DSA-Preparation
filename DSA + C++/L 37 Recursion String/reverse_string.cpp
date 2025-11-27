#include<bits/stdc++.h>
using namespace std;

void reverse(string &str,int i,int j){
    if(i>j)
    return;
    else{
        swap(str[i],str[j]);
        reverse(str,++i,--j);
    }
    
}

int main()
{
string str="abcde";
reverse(str,0,str.size()-1);
cout<<str;

return 0;
}