#include <iostream>
using namespace std;
int allAlpha(string str, int n)
{
    int arr[26] = {0}, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] > 96)
            arr[str[i] - 97]++;
        else
            arr[str[i] - 65]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            sum++;
        }
    }
    if (sum == 26)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, uc = 0, lc = 0;
    cin >> n;
    string str;
    cin >> str;
    if (n < 26)
    {
        cout << "NO";
        exit(0);
    }
    if (allAlpha(str, n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}