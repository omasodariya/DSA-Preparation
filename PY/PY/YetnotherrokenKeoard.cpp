#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        stack<char> s;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'b')
            {
                stack<char> temp;
                while (!s.empty() && !(s.top() >= 'a'))
                {
                    int ch=s.top();
                    s.pop();
                    temp.push(ch);
                }
                if(!s.empty())
                s.pop();

                while (!temp.empty())
                {
                    s.push(temp.top());
                    temp.pop();
                }
                
            }
            else if (str[i] == 'B')
            {
                stack<char> temp;
                while (!s.empty() && !(s.top() < 'a'))
                {
                    int ch=s.top();
                    s.pop();
                    temp.push(ch);
                }
                if(!s.empty())
                s.pop();
                while (!temp.empty())
                {
                    s.push(temp.top());
                    temp.pop();
                }

            }
            else
            {
                s.push(str[i]);
            }
        }
        string ans="";
        while(!s.empty())
        {
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;

    }

    return 0;
}