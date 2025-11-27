    #include<iostream>
    #include<vector>
    using namespace std;

int findPosition(vector<int>& arr, int n, int k);
int getpivot(vector<int> arr, int n);
int binarysearch(vector<int> arr,int start,int end,int k);

int getpivot(vector<int> arr, int n){
int s=0,e=n-1;
   int mid=s-((s-e)/2);
   while(s<e){
       if(arr[mid]>arr[0]){
           s=mid+1;
       }
       else{
           e=mid;
       }
       mid=s-((s-e)/2);
   }
   return mid;
}

int binarysearch(vector<int> arr,int start,int end,int k){
int s=start,e=end;
   int mid=s-((s-e)/2);
   while(s<=e){
       if(arr[mid]==k){
           return mid;
       }
       else if(arr[mid]<k){
           e=mid-1;
       }
       else{
           s=mid+1;
       }

       mid=s-((s-e)/2);
   }
   return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot=getpivot(arr,n);
   cout<<"pivot "<<pivot<<endl;
   cout<<"k "<<k<<endl;
    if((arr[pivot]>=k)&&arr[n-1]<=k)
   return  binarysearch(arr,pivot,n-1,k);
    else
    return binarysearch(arr,0,pivot,k);
   
}

    int main()
    {
    int n,k,t;
    vector<int> arr;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        arr.push_back(t);
    }
    cout<<findPosition(arr,n,k);

    
    return 0;
    }
