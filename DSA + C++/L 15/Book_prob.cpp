#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> arr, int n, int m,int mid){
int pageSum=0;
    int studentCount=1;

    for (int i = 0; i < n; i++)
    {
        if (pageSum+arr[i]<=mid)
        {
           pageSum+=arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount>m||arr[i]>mid)
            {
                return false;
            }
            pageSum=arr[i];   
        }
    }
    
return true;
}


int allocateBooks(vector<int> arr, int n, int m)
{
    int s = 0, ans = -1;
    int e = accumulate(arr.begin(), arr.end(), 0);
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        } 
    }

    return ans;
}

int main()
{
    int n, m;
    vector<int> arr = {10, 20, 30, 40};
    cout << allocateBooks(arr, 4, 2);

    return 0;
}