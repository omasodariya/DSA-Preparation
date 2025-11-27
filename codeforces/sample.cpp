#include<iostream>
using namespace std;

int main()
{
    int t,temp=2;
    cin >> t;
    int ans[t] = {0};
    while (temp--)
    {
        int n;
        cin>>n;
        cout<<"N: "<<n<<endl;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            cout<<"i "<<i<<arr[i]<<endl;
        }
    }
    for (int i = 0; i < temp; i++)
    {
        if (ans[i] != 1)
        {
            cout << "Oh, my keyboard!";
            exit(0);
        }
    }
    cout << "I become the guy.";

    return 0;
}