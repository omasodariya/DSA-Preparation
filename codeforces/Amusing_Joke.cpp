#include<iostream>
using namespace std;

int main()
{

string str,str1,str2;

int sum=0;

cin>>str>>str1>>str2;

int arr[26]={0},arr2[26]={0};

for (int i = 0; i < str.size(); i++)
{
    arr[str[i]-65]++;
}

for (int i = 0; i < str1.size(); i++)
{
    arr[str1[i]-65]++;
}

for (int i = 0; i < str2.size(); i++)
{
    arr2[str2[i]-65]++;
}

for (int i = 0; i < 26; i++)
{
    if(arr[i]!=arr2[i]){
        cout<<"NO";
        exit(0);
    }
}

cout<<"YES";

return 0;

}