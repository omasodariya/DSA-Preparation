#include <iostream>
using namespace std;

bool LuckyDivision(int num)
{

    int t = num, cnt = 0, cnt1 = 0;
    while (t > 0)
    {
        if ((t % 10) == 7 || (t % 10) == 4)
        {
            cnt1++;
        }
        t = t / 10;
        cnt++;
    }

    if (cnt == cnt1)
        return true;
    else
        return false;
}

int main()
{
    int n, t, cnt = 0, check = 0, cnt1 = 0;
    cin >> n;

    check = LuckyDivision(n);

    if (check == 1)
    {
        cout << "YES";
    }
    else
    {

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                check = LuckyDivision(i);
                if (check == 1)
                {
                    cout << "YES";
                    exit(0);
                }
            }
        }
        cout << "NO";
    }

    return 0;
}