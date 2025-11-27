#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n,ans=0;

    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n-1; i++)
        {
            for (int j= n-1 ; j > i; j--)
            {
                if (arr[i]==arr[j])
                {
                 ans=j-i+1;   
                }
                
            }
            
        }
        
        
    }

    return 0;
}