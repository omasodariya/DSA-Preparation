#include<iostream>
using namespace std;
    int marks[5];
    void input(){
        for(auto element:marks){
            cin>>element;
        }
    }
    void display(){
        for(auto element:marks){
            cout<<marks<<endl;
        }
    }

int main()
{
input();
display();

return 0;
}