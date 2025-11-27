#include<iostream>
using namespace std;

int main(){
    long long n,m,a,a1,a2;
    cin>>n>>m>>a;
    a1=(n%a==0)?0:1;
    a2=(m%a==0)?0:1;
    cout<<(n/a + a1)*(m/a + a2);
    return 0;
}