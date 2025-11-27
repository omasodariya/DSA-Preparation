#include<iostream>
using namespace std;

/*int main()
{
    int a=5,b=6;
    if(a>b)
        cout<<"Answer is A";
    if(b>a)
        cout<<"Answer is B";
    return 0;
}*/

int main()
{
    int a=2,b=a+1;
    char ch;
    cin>>ch;

    if(ch>='a'&&ch<='z')
        cout<<"Lowercase";
    else if(ch>='A'&&ch<='Z')
        cout<<"Uppercase";
    else
        cout<<"Numeric";



    /*if(a>0)
        cout<<"+ve";
    else
        cout<<"-ve";*/

    /*if((a=3)==3)
            cout<<a;
        else
            cout<<a+1;*/


    return 0;
}
