#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    int n, m;
    cin >> str1 >> str2;
    n = str1.size();
    m = str2.size();
    if (n != m)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (str1[i] != str2[n - i - 1])
            {
                cout << "NO";
                exit(0);
            }
        }
        cout << "YES";
    }

    return 0;
}