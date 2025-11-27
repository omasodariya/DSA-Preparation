#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n;
cin>>n;
long long ans=-n;

if(n<0){
ans=min(-(n/10),-((n/100)*10+(n%10)));
cout<<-ans;
}else{
cout<<-ans;
}

return 0;
}