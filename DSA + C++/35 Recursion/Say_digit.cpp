#include <bits/stdc++.h>
using namespace std;

void say(int n,string *arr){
    if(n==0)
    return;

    int t=n%10;
    n=n/10;
    
    say(n,arr);

    cout<<arr[t]<<" ";

}

int main()
{
    string arr[10] = {"Zero","One", "Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cin >> n;
    say(n,arr);
    return 0;
}