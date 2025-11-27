#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
    }

if(!(n&1)){
        cout << 2<< endl;
        cout << 1 << " " << n<< endl;
        cout << 1 << " " << n << endl;

}
else{

        cout << 4<< endl;
        cout << 1 << " " << n/2+((n/2)&1)  << endl;
        cout << 1 << " " <<n/2+((n/2)&1)  << endl;
        cout << n/2+((n/2)&1) << " " << n << endl;
        cout << n/2+((n/2)&1) << " " << n << endl;
}
        
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tests = 1;
    cin >> tests;

    while (tests--)
    {
        solve();
    }
    return 0;
}