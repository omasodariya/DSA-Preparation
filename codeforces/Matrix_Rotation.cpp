#include <iostream>
using namespace std;

void rotate(int arr[2][2])
{
    swap(arr[0][1], arr[1][1]);
    swap(arr[0][1], arr[1][0]);
    swap(arr[0][1], arr[0][0]);
}
int valid(int arr[2][2])
{
    if ((arr[0][0] < arr[0][1]) && (arr[1][0] < arr[1][1]) && (arr[0][0] < arr[1][0]) && (arr[0][1] < arr[1][1]))
    {
        return 1;
    }

    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[2][2];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
        bool check = true;
        for (int i = 0; i < 4; i++)
        {
            rotate(arr);
            if (valid(arr))
            {
                cout << "YES" << endl;
                check = false;
                break;
            }
        }
        if (check)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}