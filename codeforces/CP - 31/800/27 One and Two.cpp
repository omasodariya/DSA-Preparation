#include <bits/stdc++.h>
#define ll long long int
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl "\n"
#define GCD __gcd
#define Vall(vec) vec.begin(), vec.end()
#define fori(end) for (ll i = 0; i < end; i++)
#define forj(end) for (ll j = 0; j < end; j++)
#define MOD 1000000007
#define arrin(arr, end) \
    fori(end) { cin >> arr[i]; }
#define arrout(arr, end) \
    fori(end) { cout << arr[i] << " "; }
using namespace std;

bool arr[200006];
unordered_map<ll, bool> isPrime;

void sieveOfEratosthenes()
{
    for (int i = 2; i <= 200005; i++)
    {
        if (!arr[i])
        {
            isPrime[i] = true;
            for (int j = 2 * i; j <= 200005; j += i)
                arr[j] = true;
        }
    }
}

class DisjointSet
{
public:
    vector<ll> size, parent;

    DisjointSet(ll n)
    {
        size.resize(n, 1);
        parent.resize(n);
        for (ll i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }
    int ultimateParent(ll x)
    {
        if (x == parent[x])
            return x;
        return parent[x] = ultimateParent(parent[x]);
    }

    void handleUnion(int u, int v)
    {
        int pu = ultimateParent(u);
        int pv = ultimateParent(v);
        if (pu == pv)
            return;

        if (size[pu] > size[pv])
        {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
        else
        {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
    }
};

ll power(ll a, ll b)
{
    // a%=MOD, b%=MOD;
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    ll ans = power(a, b / 2);
    // ans%=MOD;
    if (b & 1)
        return a * ans * ans;
    // return (((a*ans)%MOD)*ans)%MOD;
    else
        return ans * ans;
    // return (ans*ans)%MOD;
}

void solve() {
    int n;
    cin>>n;
    int cnt=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {   
        int a;
        cin>>a;
        if(a==2)
        cnt++;
        arr[i]=cnt;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==cnt-arr[i]){
            cout<<i+1<<endl;
            return;
        }
    }
    
    cout<<-1<<endl;
    
} 

//************************************************************************************************//

int main()
{
    fast
    ll tests = 1;
    cin >> tests;

    while (tests--)
    {
        solve();
    }
    return 0;
}