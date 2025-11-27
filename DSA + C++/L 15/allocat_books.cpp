#include <iostream>
#include <vector>
using namespace std;

bool is_possible(int students, int books, int mid, vector<int> v)
{
    int pageSum = 0, studentCount = 1;
    for (int i = 0; i < books; i++)
    {
       if (pageSum + v[i] <= mid)
        {
            pageSum+=v[i];
        }
        else{
            studentCount++;
            if (studentCount>students ||v[i] >mid)
            {
                return false;
            }
            pageSum=v[i];
        }
    }
    return true;
}

int main()
{
    int sum = 0, ans = -1, students = 2, books = 4;
    vector<int> a;
    for (int i = 0; i < books; i++)
    {
        a.push_back((i + 1) * 10);
    }
    for (int i = 0; i < books; i++)
    {
        sum += a[i];
    }


    int s = 0;
    int e = sum;
    int mid = s + (e - s / 2);

    while (s <= e)
    {
       if (is_possible(students, books, mid, a))
       {
        ans=mid;
       e=mid-1;
       }
       else{
        s=mid+1;
       }
       mid = s + (e - s / 2);
    }

    cout << ans;

    return 0;
}