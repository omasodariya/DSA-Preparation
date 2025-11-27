#include<bits/stdc++.h>
using namespace std;

int binary_search(int key,int* arr,int s,int e){
    int mid=(e-s)/2+s;
    
    if(arr[mid]==key)
    return mid;
    
    if (s==e)
    return -1;

    if(arr[mid]>key)
    binary_search(key,arr,s,mid-1);
    else
    binary_search(key,arr,mid+1,e);


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
int key;
cin>>key;
int s=0;
int e=n-1;
cout<<binary_search(key,arr,s,e);

return 0;
}