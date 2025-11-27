#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string day[7] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY","THURSDAY","FRIDAY", "SATURDAY"};

        cout<<setw(30)<<"BREAKFAST"<<setw(14)<<"LUNCH"<<setw(14)<<"DINNER"<<endl;
    for (int i = 0; i < 7; i++)
    {
        cout<<setw(3)<<i+1<<setw(11)<<day[i]<<endl;

    }

    return 0;
}