#include<bits/stdc++.h>
using namespace std;

int getLength(char* arr){
    int cnt=0;
    while (arr[cnt]!='\0')
    {
        cnt++;
    }
    return cnt;
}

int main()
{
char arr[10];
cin>>arr;

cout<<"Length: "<<getLength(arr)<<endl;
int n=getLength(arr);
//reverse string

for (int i = 0; i < n/2; i++)
{
    swap(arr[i],arr[n-i-1]);
}

cout<<arr;

return 0;
}