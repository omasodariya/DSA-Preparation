#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int binarysearch(vector<int>&v,int key,int N){
   int s,e,mid;
   s=0;
   e=N-1;
   mid=s-((s-e)/2);
   while(s<e){
       if(v[mid]>=key){
           e=mid;
       }
       else{        
           s=mid+1;
       }
        mid=s-((s-e)/2);
   }
    return mid;
}

int main() {
   int N,Q,t,Y;
    int ans;
   vector<int> X;
   cin>>N;
   
   
   for (int i = 0; i < N; i++)
   {
    cin>>t;
    X.push_back(t);
   }
cin>>Q;
   for (int i = 0; i < Q; i++)
   {
    cin>>Y;
   ans=binarysearch(X,Y,N);
    
        if (Y==X[ans])
        {
           cout<<"Yes "<<ans+1<<endl;
        }
        else 
        {
           cout<<"No "<<ans+1<<endl;
        } 
   }
    return 0;
}
