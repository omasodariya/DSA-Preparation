#include<iostream>
using namespace std;

int find_unique(int arr[],int n){
   int ans=arr[0];

for (int i = 1; i < n; i++)
{
    ans=ans^arr[i];
}
return ans;

}


int main(){
int n,c,unique;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
cout<<find_unique(arr,n);
return 0;
}