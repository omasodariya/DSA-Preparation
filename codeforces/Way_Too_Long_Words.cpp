#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
while (n>0)
{

string s;
cin>>s;
int i=0;
while (s[i]!='\0')
{
    i++;
}
if (i>10)
{
    s=s[0]+to_string(i-2)+s[i-1];
}
cout<<s<<endl;

n--;
    
}

return 0;
}