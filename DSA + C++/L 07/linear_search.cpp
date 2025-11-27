#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

bool search(int *arr, int n,int key)
{

    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return 1;
            return 0;

}

int main()
{
    int n, sum = 0,key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin>>key;
    if (search(arr, n,key))
    {
        cout << "present";
    }
    else 
    {
        cout << "absent";
    }
}