#include<bits/stdc++.h>
using namespace std;

class heap{

    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size=size+1;
        int index=size;
        arr[size]=val;

        while (index>1)
        {
            int parent=index/2;
            if(arr[index]>arr[parent]){
                swap(arr[index],arr[parent]);
                index=parent;    
            }
            else
                break;
        }
    }

    void print(){
        for (int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deletion(){
            if(size==0){
                cout<<"Nothing to delete"<<endl;
                return;
            }        

            // step 1 : put val of last node to first node 
            arr[1]=arr[size];
            // step 2 : update pointer
            size--;
            //step 3:take root node to its correct position
            int i=1;
            while(i<size){
                
                int left=2*i;
                int right=2*i+1;

                if(left<size /* out of bound */ && arr[i]<arr[left]){
                        swap(arr[i],arr[left]);
                        i=left;
                }
                else if(right<size && arr[i]<arr[right]){
                        swap(arr[i],arr[right]);
                        i=right;
                }
                else{
                    return;
                }

            }
    }

};

    void heapify(int arr[],int n,int i){

        int largest=i;
        int left=2*i+1;
        int right=2*i+2;

        if(left<=n && arr[largest] <arr[left]){
               largest=left; 
        }
        if(right<=n && arr[largest] <arr[right]){ 
               largest=right; 
        }
        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }

    }

    void heapsort(int arr[],int n){
        int size=n;
        while(size>0){
        swap(arr[0],arr[size]);
        size--;
        heapify(arr,size,0);
        }
    }

int main()
{
    heap h;

    // h.insert(50);
    // h.insert(55);
    // h.insert(53);
    // h.insert(52);
    // h.insert(54);

    // h.print();
    // h.deletion();
    // h.print();
 
    int arr[]={54,53,55,52,50,23,5};
    int n=7;
    // for (int i =n/2-1; i>0; i--)
    // {
    //     heapify(arr,n,i);
    // }
    heapsort(arr,n-1);
    cout<<"Print the array Now: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
return 0;
}