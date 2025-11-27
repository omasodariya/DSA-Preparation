#include<iostream>
#include<iomanip>

using namespace std;

int bit1(int n){
int c=0;
    for (int i = 0; n!=0; i++)
    {
        if ((n%10)&1)
        {
            c++;
        }
           n=n>>1;
    }
    return c;
}

int main(){
int a,b;
cin>>a>>b;
cout<<bit1(a)<<endl;
cout<<bit1(b)<<endl;
cout<<bit1(a)+bit1(b);
return 0;
}