// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int b,c,h;
//         cin>>b>>c>>h;
//         int layer=0;
//         if(b==c+h){
//             layer=2*(c+h)-1;
//         }
//         if(b>c+h){
//             layer=2*(c+h)+1;
//         }
//        else{
//            layer=2*(b)-1;
//        }

//         cout<<layer<<endl;

//     }

//     return 0;

// }

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n], ans[n], cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int j = 0; cnt != n; j++)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (arr[i] > 0)
                {
                    arr[i] -= k;
                    if (arr[i] <= 0)
                    {
                        ans[cnt] = i + 1;
                        cnt++;
                        continue;
                    }
                }
            }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
            for (int i = 0; i < n; i++)
            {
        cout<<i << endl;
                if (arr[i] > 0)
                {
                    arr[i] -= k;
                    if (arr[i] <= 0)
                    {
                        ans[cnt] = i + 1;
                        cnt++;
                        continue;
                    }
                }
            }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}