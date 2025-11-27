#include<iostream>
using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    string str[n];
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>str[i];
        if(str[0]==str[i]&&i!=0){
            cnt++;
            arr[i]=1;
            str[i]=str[0]+to_string(cnt);
        }
    }
    for(int i=1;i<n;i++){
        if(arr[i]==0){
            cnt=0;
            for(int j=i;j<n;j++){
                 if(str[i]==str[j]){
            cnt++;
            arr[i]=1;
            str[i]=str[j]+to_string(cnt);
                 }
            }
        }else{
            continue;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        cout<<"OK"<<endl;
        else
        cout<<str[i]<<endl;
        
    }
    
    
    
    
}
