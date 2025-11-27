#include <iostream>
using namespace std;

int main()
{
    string str;
    int n, a = 0, d = 0;
 cin>>n;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a > d)
        cout << "Anton";
    else if (d > a)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}