#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<char> ch;
    int cnt = 0;
    char temp = '0';
    for (int i = 0; temp != '}'; i++)
    {
        cin >> temp;
        if (temp != ',' && temp != '{' && temp != '}')
        {
            ch.push_back(temp);
        }
    }
    if (ch.size() == 0)
    {
        cout<<0;
        exit(0);
    }
    sort(ch.begin(), ch.end());
    if (ch.size() == 1)
    {
        cnt++;
    }
    else
    {
        temp = ch[0];
        cnt++;
        for (int i = 1; i < ch.size(); i++)
        {
            if (ch[i - 1] != ch[i])
            {
                cnt++;
                temp = ch[i];
            }
        }
    }
    cout<<cnt;
    return 0;
}