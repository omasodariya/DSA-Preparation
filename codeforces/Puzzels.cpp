#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, diff = 0, min = 1001;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    for (int i = 0; i <= m - n; i++)
    {
        diff = arr[i + n - 1] - arr[i];
        if (min > diff)
        {
            min = diff;
        }
    }
    if (n==m)
    cout << arr[m-1]-arr[0];
    else
    cout << min;

    return 0;
}