#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
        int arr1[t];
        for (int i = 0; i < t; i++)
        {
            cin>>arr1[i];
        }
int j=0;     

    while (t--)
    {

        if ((arr1[j] / 2) % 2 != 0)
        {
            cout << "NO"<<endl;
        }
        else
        {
            cout << "YES";
            cout << endl;
            int arr[arr1[j]];
            for (int i = 0; i < arr1[j]/2; i++)
            {
                    arr[i] = 2 * (i + 1);
            }
            for (int i = arr1[j]/2,k=0; i < arr1[j]-1;k++, i++)
            {
                    arr[i] = (2 *k) + 1;
            }
                    arr[arr1[j]-1] = arr1[j]+((arr1[j]/2)-1);
                    
        for (int i = 0; i < arr1[j]; i++)
        {
            cout<<arr[i]<<" ";
        }
            cout << endl;
        }
            j++;
    }

    return 0;
}