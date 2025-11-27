#include <bits/stdc++.h>
#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    int flag = true;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[i] = a;
        if (sum == a)
            flag = false;
        sum += a;
    }
    if (v[0] == v[n - 1]) no;
    else if (flag)
    {
        yes;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    else
    {
        swap(v[0], v[n - 1]);
        flag = true;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum == v[i])
                flag = false;
            sum += v[i];
        }
        if(flag){
            yes;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        }else{
            no;
        }
    }
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