#include<bits/stdc++.h>
using namespace std;

void partition(int *arr,int s,int e){
    int pivot=arr[s];

    int i=s;
    int j=e;

    do
    {
        i++;
    } while (arr[i]>pivot);

    do
    {
        j--;
    } while (arr[j]<pivot);

    swap(arr[i],arr[j]);
    
}

void quickSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    
    int p=partition(arr,s,e);

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);
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

quickSort(arr,0,n);

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

cout<<endl;
return 0;
}