#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m,a,b;
cin>>n>>m>>a>>b;
int ans;
if(m*a<b)
ans=n*a;
else
ans=(n/m)*b+(n-(n/m)*m)*a;

ans=min(ans,((n/m)+1)*b);
cout<<ans;
return 0;
}