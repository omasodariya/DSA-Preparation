// #include<iostream>
// using namespace std;

// int firstOcc(int arr[],int size,int key){
// int start=0,end=size-1,mid=(start+end)/2,ans=-1;
// while (start<=end)
// {
//     if(arr[mid]==key){
//     ans=mid;
//        end=mid-1;
//     }
//    else if (arr[mid]<key)
//     {
//         start=mid+1;
//     }
//    else
//     {
//        end=mid-1;
//     }
//      mid=(start+end)/2;
// }

// return ans;
// }

// int lastOcc(int arr[],int size,int key){
// int start=0,end=size-1,mid=(start+end)/2,ans=-1;
// while (start<=end)
// {
  
//     if(arr[mid]==key){
//     ans=mid;
//     start=mid+1;
//     }
//    else if (arr[mid]>key)
//     {
//        end=mid-1;
//     }
//    else
//     {
//         start=mid+1;
//     }
//      mid=(start+end)/2;
// }

// return ans;
// }

// int main()
// {
// int arr[]={1,2,3,3,3,4,4,5,5,5,6,7,8,9,9,9,9,10,10},key;
// int firstIX,lastIX;
// cin>>key;
// firstIX=firstOcc(arr,19,key);
// lastIX=lastOcc(arr,19,key);
// cout<<"F.O: "<<firstIX<<endl;
// cout<<"L.O: "<<lastIX<<endl;
// return 0;
// }

#include <iostream>
using namespace std;

int main() {
	int t;
	int N;
	cin>>t;
	while(t--){
	    cin>>N;
	    char arr[N];
         cin>>arr;
	    for(int i=0;i<N;i++){
	        if(i==0){
	            cout<<arr[i];
	        }
	        else if(arr[i]!=arr[i-1])
	        {
	        cout<<arr[i];
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
