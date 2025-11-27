#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0, sum = 0, sum2 = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n);

    for (int i = n - 1; i >= 0; i--)
    {
        if (sum2 <= sum - sum2)
        {
            cnt++;
        }
        else
        {
            break;
        }

        sum2 += arr[i];
    }

    cout << cnt;

    return 0;
}