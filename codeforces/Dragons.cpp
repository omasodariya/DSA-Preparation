#include<bits/stdc++.h>
using namespace std;

int main()
{
int p,n;
cin>>p>>n;

vector<pair<int ,int >> d(n);

for (int i = 0; i < n; i++)
{
    cin>>d[i].first;
    cin>>d[i].second;
}

sort(d.begin(),d.end());

for (int i = 0; i < n; i++)
{
    if(p>d[i].first){
        p+=d[i].second;
    }
    else{
        cout<<"NO";
        exit(0);
    }
}
        cout<<"YES";



return 0;
}