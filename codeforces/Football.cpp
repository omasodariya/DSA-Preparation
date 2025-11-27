#include <iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int n, k = 0;
    n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (str[i - 1] == str[i])
        {
            k++;
        }
        else
        {
            k = 0;
        }
        if (k >= 6)
        {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";

    return 0;
}