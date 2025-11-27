#include <iostream>
#include <vector>
using namespace std;

int check(int t)
{
    vector<int> v;
    for (int i = 0; t > 0; i++)
    {
        v.push_back(t % 10);
        t /= 10;
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int n;
    cin >> n;
    n++;
    while (check(n) == 0)
    {
        n++;
    }
    cout << n;

    return 0;
}