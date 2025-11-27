// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// int n;
// cin>>n;
// string s[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>s[i];
// }

// sort(s,s+n);

// for (int i = 0; i < n; i++)
// {
//     cout<<s[i]<<endl;
// }

// return 0;
// }

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#define all(a) (a).begin(), (a).end()

using namespace std;

using ll = long long;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    int i = min_element(all(a)) - a.begin();
    int j = max_element(all(b)) - b.begin();

    if (a[i] < b[j]) {
        swap(a[i], b[j]);
    }

    if (k % 2 == 0) {
        i = max_element(all(a)) - a.begin();
        j = min_element(all(b)) - b.begin();

        if (b[j] < a[i]) {
            swap(a[i], b[j]);
        }
    }

    ll ans = accumulate(all(a), 0LL);
    cout << ans << "\n";
}

int main() {
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }


    return 0;
}