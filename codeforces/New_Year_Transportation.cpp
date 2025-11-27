#include<bits/stdc++.h>
using namespace std;

int arr[100000];

int main()
{
    int n,t;

cin>>n>>t;

int cell[n];
cell[0]=0;
for (int i = 1; i < n; i++)
{
    cin>>cell[i];
}

for (int i = 0; i < n;)
{
    i=i+cell[i];
    ++arr[i];
}

if(arr[t]>0){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

return 0;
}