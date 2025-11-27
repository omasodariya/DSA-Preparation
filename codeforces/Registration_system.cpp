#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<string, int>> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i].second == 0)
        {
            int cnt = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (s[i].first == s[j].first)
                {
                    s[j].first += to_string(cnt);
                    s[j].second = 1;
                    cnt++;
                }
            }
            s[i].first = "OK";
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<s[i].first<<endl;
    }
    

    return 0;
}