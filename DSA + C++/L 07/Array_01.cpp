#include<iostream>
#include<iomanip>
#include<climits>
using namespace std;

int main(){
int n,maxv=INT_MIN,minv=INT_MAX;
cin>>n;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    maxv=max(arr[i],maxv);
    minv=min(arr[i],minv);
 
        // if (arr[i]>max)
        //     max=arr[i];
        // if (arr[i]<min)
        //     min=arr[i];    
}

cout<<maxv<<endl;
cout<<minv<<endl;
}


// int main(){
// int n,max,min;
// cin>>n;
// int arr[n];

// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
//     if (i==0)
//     {
//         max=arr[0];
//         min=arr[0];
//     }else
//     {
//         if (arr[i]>max)
//             max=arr[i];
//         if (arr[i]<min)
//             min=arr[i];
//     }       
// }

// cout<<max<<endl;
// cout<<min<<endl;
// }