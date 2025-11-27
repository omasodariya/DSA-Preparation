#include<bits/stdc++.h>
using namespace std;

int linearSearch(int *arr,int i,int key,int size){

    if(size==0)
        return -1;

    if(arr[0]==key)
        return i;

    return linearSearch(++arr,++i,key,--size);
    
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

int key;cin>>key;

cout<<linearSearch(arr,0,key,n);

return 0;
}