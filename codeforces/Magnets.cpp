#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 1;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
        if (i!=0&&str[i-1]!=str[i])
        {
            cnt++;
        }
        
    }

    cout<<cnt;

    return 0;
}