#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void binarysearch(vector<int> X,int key){
 int start=0;
 int end=(X.size()-1); 
 int mid=start-((start-end)/2);  

while(start<=end){
    if (X[mid]==key && X[mid-1]<key)
    {
        cout<<"Yes "<<mid<<endl;
        break;
    }
    else if (X[mid]<key)
    {
        start=mid+1;
    }
    else if (X[mid]>key && X[mid-1]<key)
    {
        cout<<"No "<<mid<<endl;
        break;
    }else if(X[mid]>key){
        end=mid-1;
    }
    mid=start-((start-end)/2);
}
    
}


int main() {
   int N,Q,t;
   vector<int> X,Y;
   cin>>N;
   for (int i = 0; i < N; i++)
   {
    cin>>t;
    X.push_back(t);
   }
cin>>Q;
   for (int i = 0; i < Q; i++)
   {
    cin>>t;
    Y.push_back(t);
   }
   for (int i = 0; i < Q; i++)
   {
        binarysearch(X,Y[i]);
    }
    return 0;
}
