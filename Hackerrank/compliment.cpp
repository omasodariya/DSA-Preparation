#include<iostream>
using namespace std;

int main()
{
int x = 42;
int mask = -1; // all bits set to 1
int complement = x & mask;

cout<<complement;

return 0;
}