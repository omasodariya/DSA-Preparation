#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str1;
    cin >> str1;
    int ch[3] = {0}, len = str1.length(),p;
    p=len/2;
    for (int i = 0; i < len; i++)
    {
        if (str1[i] == '1')
            ch[0]++;
        if (str1[i] == '2')
            ch[1]++;
        if (str1[i] == '3')
            ch[2]++;
    }

    for (int i = 0; i < len; i++)
    {
        if (ch[0] > 0)
        {
            cout << 1;
            ch[0]--;
        }
        else if (ch[1] > 0)
        {
            cout << 2;
            ch[1]--;
        }
        else if (ch[2] > 0)
        {
            cout << 3;
            ch[2]--;
        }
        if (p>0)
        {
            cout<<'+';
            p--;
        }
        
    }

    return 0;
}