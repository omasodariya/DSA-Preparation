#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 0;

    char arr[] = {'h', 'e', 'l', 'l', 'o'};

    for (int i = 0; i < s.size(); i++)
    {
        if (arr[cnt] == s[i])
        {
            cnt++;
            if (cnt == 5)
            {
                cout << "YES";
                exit(0);
            }
        }
    }

    cout << "NO";
    return 0;
}