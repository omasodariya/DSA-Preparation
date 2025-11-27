#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char> c;

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||s[i] == 'y')|| (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y'))
        {
        }
        else
        {
            if (isupper(s[i]))
            {
                c.push_back(s[i] + 32);
            }
            else
            {
                c.push_back(s[i]);
            }
        }
    }
    s = "";
    for (int i = 0; i < c.size(); i++)
    {
        s = s + '.' + c[i];
    }

    cout << s;

    return 0;
}