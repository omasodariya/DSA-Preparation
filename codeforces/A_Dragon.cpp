#include<iostream>
using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    int arr[n][2];
    
    for(int i=0;i<n;i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    
    int i, key,key2, j;
    for (i = 1; i < n; i++) {
        key = arr[i][0];
        key2=arr[i][1];
        j = i - 1;
        while (j >= 0 && arr[j][0] > key) {
            arr[j + 1][0] = arr[j][0];
            arr[j + 1][1] = arr[j][1];
            j = j - 1;
        }
        arr[j + 1][0] = key;
        arr[j + 1][1] = key2;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (s>arr[i][0])
        {
        }else{
            cout<<"NO";
            exit(0);
        }
        s+=arr[i][1];
        
    }
            cout<<"YES";
    
    
    
    return 0;
}