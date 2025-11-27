#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,even,odd;
int ecnt=0,ocnt=0;
cin>>n;
for (int i = 0; i < n; i++)
{
    int a;
    cin>>a;
    if(a&1){
        ocnt++;
        even=i+1;
    }else{
        ecnt++;
        odd=i+1;
    }
}
if(ecnt==1){
    cout<<odd;
}else{
    cout<<even;
}


return 0;
}