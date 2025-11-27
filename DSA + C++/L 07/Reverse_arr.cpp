#include<iostream>
#include<iomanip>
using namespace std;

void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}

int main(){
int n;
cin>>n;
int arr[n];

for (int i = 0; i < n; i++)
    cin>>arr[i];

for (int i = 0; i < n/2; i++)
    swap(arr[i],arr[n-i-1]);

for (int i = 0; i < n; i++)
    cout<<arr[i]<<endl;

    return 0;
}