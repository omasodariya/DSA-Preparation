#include<iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;
int vector[n][3],ans[3]={0};

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < 3; j++)
    {
    cin>>vector[i][j];
      ans[j]+=vector[i][j];  
    }
}

   if (ans[0]==0 && ans[1]==0 && ans[2]==0 )
   {
     cout<<"YES";
   }else{

     cout<<"NO";

   }
   








return 0;
}