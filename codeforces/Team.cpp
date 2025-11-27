#include<iostream>
#include<vector>
using namespace std;

int main(){
    int ans,count=0,n,jcnt;
    cin>>n;
    int v[3];
    for(int i=0;i<n;i++){
        cin>>v[0]>>v[1]>>v[2];
        jcnt=0;
        for(int j=0;j<3;j++){
            if(v[j]==1){
            jcnt++;
            }
        }
        if(jcnt>=2){
            count++;
        }
    }
    cout<<count;
    return 0;
}