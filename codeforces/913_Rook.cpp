#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        
    
string s;
cin>>s;

char column=s[0];
int row=s[1]-48;

for (int i = 1; i <= 8; i++)
{
    if(i!=row){
        cout<<column<<i<<endl;
    }
}

for (char i = 'a'; i <= 'h'; i++)
{
    if(i!=column){
        cout<<i<<row<<endl;
    }
}
    }


return 0;
}