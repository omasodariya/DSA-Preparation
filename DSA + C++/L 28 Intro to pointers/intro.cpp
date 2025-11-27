#include<bits/stdc++.h>
using namespace std;

int main()
{
int num=5;

cout<<num<<endl;

// address of operator - &
// cout<<"Address of num is : "<<&num<<endl;

int *ptr=&num;

cout<<"Address is: "<<ptr<<endl;
cout<<"Value is: "<<*ptr<<endl;

cout<<"Size of Integer is: "<<sizeof(num)<<endl;
cout<<"Size of pointer is: "<<sizeof(ptr)<<endl;


return 0;
}