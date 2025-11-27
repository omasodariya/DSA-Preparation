#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        int temp[n], cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp[i];
            arr.push_back(temp[i]);
        }
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0 && temp[i] % 2 == 0)
                cnt++;
        }
        if (cnt==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }

    return 0;
}
