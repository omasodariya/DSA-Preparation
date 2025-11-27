#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        string s;
        cin >> s;
        a = (int)s[0] - 48;
        b = (int)s[2] - 48;

        cout << a + b << endl;
    }
    
    return 0;
}
