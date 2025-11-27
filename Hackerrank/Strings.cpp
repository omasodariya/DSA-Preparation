#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1,str2,str3;
    char t;
	cin>>str1>>str2;
    int l1=str1.size(),l2=str2.size();
  cout<<l1<<" "<<l2<<endl;
  str3=str1+str2;
  cout<<str3<<endl;
  t=str1[0];
  str1[0]=str2[0];
  str2[0]=t;
  cout<<str1<<" "<<str2;
  
    return 0;
}