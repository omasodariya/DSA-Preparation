#include<iostream>
using namespace std;
int mountain_element(int arr[],int size){
int s=0,e=size-1,mid=s-((s-e)/2);
while (s<e)
{
    if (arr[mid]<=arr[mid+1])
    {
        s=mid+1;
    }else{
        e=mid;
    }
    mid=s-((s-e)/2);
}

return mid;
}

int main()
{
int arr[]={1,2,3,4,8,6,5,3,2,0};
int ans=mountain_element(arr,10);
cout<<arr[ans];

return 0;
}