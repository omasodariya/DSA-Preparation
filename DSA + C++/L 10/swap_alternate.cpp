#include<iostream>

#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

int main (){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if (i&1)
    {

        swap(arr[i],arr[i-1]);
        // arr[i]=arr[i]+arr[i-1];
        // arr[i-1]=arr[i]-arr[i-1];
        // arr[i]=arr[i]-arr[i-1];
    }
    
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}







    return 0;
}