#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n, ans = 0;
    n = s.size();
    int arr[n];
    arr[0] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            ans++;
        }
        arr[i + 1] = ans;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, ans;
        cin >> a >> b;
        ans = arr[b - 1] - arr[a - 1];

        cout << ans << endl;
    }

    return 0;
}