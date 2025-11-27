#include <iostream>
using namespace std;

int main()
{
    int n, m, a, b, sum1,sum2,sum3;
    cin >> n >> m >> a >> b;
    int mticket = n / m, nticket = n % m;
    int amnt;

    sum1 = n * a;
    sum2 = (mticket * b) + (nticket * a);
    sum3 = ((mticket+1) *b ) ;
    cout << sum1<<endl;
    cout << sum2<<endl;
    cout << sum3<<endl;
    amnt = min(min(sum1, sum2),sum3);//8
 sum2;
    // }

    cout << amnt;

    return 0;
}