#include <iostream>
#include <iomanip>
using namespace std;    

int main()
{
    int i, j, n;

    cin >> n;

    for (i = 1; i < 2 * n; i++)
    {
        for (j = 1; j < 2 * n; j++)
        {
            if ((i + j) <= 2 * n)
            {

                cout << setw(3) << (n - (min(i, j) - 1));
            }
            else
            {
                cout << setw(3) << (n - (2 * n - 1 - max(i, j)));
            }
        }
        cout << endl;
    }

    return 0;
}
