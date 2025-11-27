#include<bits/stdc++.h>
using namespace std;


void merge(int*arr,int s,int e){
    int mid=(s+e)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *first=new int[l1];
    int *second=new int[l2];

    int k=s;
    for (int i = 0; i < l1; i++)
    {
        first[i]=arr[k++];
    }

    k=mid+1;
    for (int i = 0; i < l2; i++)
    {
        second[i]=arr[k++];
    }

    int i=0;
    int j=0;
    k=s;
    while(i<l1 && j<l2){
        if (first[i]>second[j])
        {
            arr[k++]=second[j++];
        }else{
            arr[k++]=first[i++];
        }    
    }

    while (i<l1)
    {
            arr[k++]=first[i++];
    }
    
    while (j<l2)
    {
            arr[k++]=second[j++];
    }

    delete []first;
    delete []second;
    
}


void Mergesort(int *arr,int s,int e){
    //base condition
    if(s>= e){
        return;
    }

    int mid=(e-s)/2+s;
    //left part to sort
    Mergesort(arr,s,mid);
    Mergesort(arr,mid+1,e);

    merge(arr,s,e);

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
Mergesort(arr,0,n-1);
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}


return 0;
}