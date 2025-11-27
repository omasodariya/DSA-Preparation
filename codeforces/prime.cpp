#include<iostream>
using namespace std;

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
    int CP=prime(59);
    cout<<CP;

return 0;
}