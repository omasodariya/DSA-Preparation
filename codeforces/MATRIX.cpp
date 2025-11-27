#include<iostream>
using namespace std;

int main()
{
int t,ith,jth,row=0,column=0;
int arr[5][5];
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        cin>>arr[i][j];
    }
    
}
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        if (arr[i][j]==1)
        {
            ith=i+1;
            jth=j+1;
            break;
        }
        
    }
    
}

    if (ith<=3)
        row=3-ith;
    else
        row=ith-3;
    if (jth<=3)
        column=3-jth;
    else
        column=jth-3;

cout<<row+column;

return 0;
}