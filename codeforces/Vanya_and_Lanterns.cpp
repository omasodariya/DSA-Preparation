#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, l;
    cin >> n >> l;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    double maxd=0,lm=0,rm=0,diff=0,temp=0,ans=0;

    if (arr[0] != 0)
    {
        rm = arr[0];
    }

    for (int i = 0; i < n - 1; i++)
    {
      temp=(arr[i + 1] - arr[i]);
        if (maxd <=temp )
        {
            maxd = temp;
        }
    }
      if (arr[n - 1] != l)
        {
            rm=l-arr[n-1];
        }
    diff=maxd/2;
    ans=max(diff,max(lm,rm));

    cout<< left <<fixed << setprecision(10) << ans;

    return 0;
}