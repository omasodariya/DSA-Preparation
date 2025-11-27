#include<bits/stdc++.h>
using namespace std;

int rangeMin(int n,int m){
    int maxi=n;
    int mini=n&1?n/2+1:n/2;

    if(mini==m)
    return mini;
    else if(mini>m){
        for (int i=(mini/m)*m; i <= n; i+=m)
        {
            if(i>=mini)
            return i;
        }       
    }else{
        for (int i=m; i <= n; i+=m)
        {
            if(i>=mini)
            return i;
        }       
    }

    return -1;
}

int main()
{
    int n,m;
    cin>>n>>m;

    if(n<m)
    cout<<-1<<endl;
    else 
    cout<<rangeMin(n,m)<<endl;

return 0;
}