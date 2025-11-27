#include <iostream>
using namespace std;

int getLength(string s)
{

    int l = 0;
    while (s[l] != 0)
    {
        l++;
    }
    return l;
}

string reverse(string s)
{

    int sp=10,ep = getLength(s)-1;
    char ch=char(10);
    // sp=ch;
    cout<<sp<<ch<<ch;
//     while (sp<ep)
//     {
//         swap(s[sp++],s[ep--]);
//     }
//     return s;
// }

// int main()
// {
//     string s,rs;
//     cin >> s;
//     cout << "Length of String " << s << " is " << getLength(s)<<endl;
//     cout << "Reverse of String " << s << " is " << reverse(s)<<endl;

    return 0;
}