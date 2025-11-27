#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,k,i,j;
    cin>>n;
    cin>>q;
    int **p= new int*[n];
    
    for(int i=0;i<n;i++){
        cin>>k;
        p[i]=new int [k];
        for(int j=0;j<k;j++){
            cin>>p[i][j];
        }    
    }
    for(int a=0;a<q;a++){
        cin>>i>>j;
        cout<<p[i][j]<<endl;
    }
     
    return 0;
}