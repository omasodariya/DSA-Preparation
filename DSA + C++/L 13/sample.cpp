#include<iostream>
#include<string>
using namespace std;
class Parent;
class Child
{
    string name;
    char gender;
public:
    void getdata()
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"Gender: ";
        cin>>gender;}
    void putdata(){
        cout<<"Name:- "<<name<<endl<<"Gender:- "<<gender<<endl;}
    friend class Parent;
};
class Parent{
public:
    void ReadChildData(Child &c){
        c.getdata();}
    void DisplayChildData(Child &c){
        c.putdata();}
};main()
{
    Child c1,c2;
    Parent p1;
    c1.getdata();
    cout<<endl<<"Using Child's Member function:"<<endl;
    c1.putdata();
    cout<<endl;
    p1.ReadChildData(c2);
    cout<<endl<<"Using Parent's Member function:"<<endl;
    p1.DisplayChildData(c2);
    cout<<"\n22DCS019\nKrenil";
    return 0;}
