#include<bits/stdc++.h>
using namespace std;

int power(int a,int b){

    if(b==0)
        return 1;
    else{
        if(b&1){
            return a*power(a*a,b/2);
        }else{
            return power(a*a,b/2);
        }
    }
    
}


int main()
{
int a,b;
cin>>a>>b;
cout<<power(a,b);

return 0;
}