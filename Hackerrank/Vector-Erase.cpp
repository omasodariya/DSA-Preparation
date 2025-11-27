#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int t,x,a,b;
    vector<int> arr;  
    for(int i=0;i<n;i++){
    cin>>t;
    arr.push_back(t);    
    }
    cin>>x>>a>>b;
    arr.erase(arr.begin()+x-1);
    for (int i = a; i < b; i++)
    {
    arr.erase(arr.begin()+a-1);   
    } 
    cout<<arr.size()<<endl;
    for (int i = 0; i <arr.size(); i++)
    {
    cout<<arr[i]<<" "; 
    } 
    return 0;
}
