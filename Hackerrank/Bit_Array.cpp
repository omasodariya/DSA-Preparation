#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned int N,S,P,Q,count=1,ans,mod;
    cin>>N>>S>>P>>Q;
    mod=pow(2,31);
 
ans=S;
for (int i = 1;i< N;i++){    
  S= (S*P+Q)%mod;// (modulo 2^31); 
    if (ans!=S)
    {
        ans=S;
       count++;
    }  
}

cout<<count;

    return 0;
}