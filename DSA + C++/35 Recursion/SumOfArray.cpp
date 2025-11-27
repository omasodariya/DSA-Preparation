#include<bits/stdc++.h>
using namespace std;

int Sum(int *arr,int size){

    if(size==0){
        return 0;
    }

    return arr[0]+Sum(++arr,--size);
}

int main()
{

int n;
cin>>n;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

cout<<Sum(arr,n);

return 0;
}