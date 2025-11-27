#include <iostream>
#include <algorithm>
using namespace std;
 
int binarySearch(int *arr, int x, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
 
 
    while (s <= e)
    {
        if (x >= arr[mid])
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s + (e - s) / 2;
    }
 
    return s;
}
 
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;        
        cout << binarySearch(arr, x, n)<<endl;
    }
 
    return 0;
}