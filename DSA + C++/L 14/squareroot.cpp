#include <iostream>
using namespace std;

int sqrt(int N)
{
    int start = 0, end = N;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == N)
        {
            return mid;
        }
        if (square < N)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
double sqrtdigit(int N, int ans)
{
    double flag = 1,sqrt=ans;
  for (int i = 0; i < 3; i++)
  {
    flag=flag/10;
   for (double j=sqrt; j*j<N;j+=flag)
   {
  sqrt=j;
   }
    
  }
  return  sqrt;
   
}
int main()
{
    int n, ans;
    double ans1;
    cin >> n;
    ans = sqrt(n);
    ans1 = sqrtdigit(n, ans);
    cout << ans1;
    return 0;
}