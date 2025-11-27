#include <iostream>
#include <math.h>
using namespace std;

int primeNum[100000]={0};

int prime(long long n){
    for (int i = 2; i < n/i; i++)
    {
        if (n%i==0)
        {
            return 0;
        }    
    }
return 1;
}

int main()
{
    int t;
    cin >> t;
    long long arr[t],sq;

    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
        primeNum[i]=prime(arr[i]);
    }

    for (int i = 0; i < t; i++)
    {
        sq=sqrt(arr[i]);
   
        if (sq*sq==arr[i] && arr[i]!=1 && primeNum[i]==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
    


    return 0;
}