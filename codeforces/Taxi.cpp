#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n],no1=0,no2=0,no3=0,no4=0;
int taxi=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]==1)
    no1++;
    if(arr[i]==2)
    no2++;
    if(arr[i]==3)
    no3++;
    if(arr[i]==4)
    no4++;
}
taxi+=no4;
if(no3<=no1){
taxi+=no3;
no1-=no3;
}else{
    taxi+=no3;
    no1=0;
}
taxi+=no2/2;
no2=no2%2;
if(no2==1){
    if(no1>=2){
        taxi++;
        no1-=2;
    }else{
        taxi++;
        no1=0;
    }
}

    taxi+=no1/4;
    if(no1%4!=0)
    taxi++;

cout<<taxi;


return 0;
}