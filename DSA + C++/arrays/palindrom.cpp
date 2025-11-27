#include<bits/stdc++.h>
using namespace std;


int main()
{
string str;
cin>>str;
int n=str.length();
for (int i = 0; i < n/2; i++)
{
    if(tolower(str[i])!=tolower(str[n-i-1])){
        cout<<"False"<<endl;
        exit(0);
    }
}
    cout<<"True"<<endl;

return 0;
}