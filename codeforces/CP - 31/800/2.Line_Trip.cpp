#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin>>n>>x;
        int curr=0;
        int mx=0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            mx=max(mx,a-curr);
            curr=a;
        }
        mx=max(mx,2*(x-curr));
        cout<<mx<<endl;
    }

    return 0;
}