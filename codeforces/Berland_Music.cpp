// //------------------------------------------------------------------
// #include <bits/stdc++.h>
// #define endl '\n'
// #define ll long long
// #define yes cout << "YES" << endl
// #define no cout << "NO" << endl
// #define outn(n) cout << n << endl
// #define test(t) while (t--)
// #define fori(i, n) for (long long i = 0; i < n; i++)
// #define ford(i, n) for (long long i = n - 1; i >= 0; i--)
// #define arrin(arr, n) fori(n) cin >> arr[i]
// #define arrout(arr, n) fori(n) cout << arr[i]
// #define arr2din(arr, n, m) fori(i, n) fori(j, m) cin >> arr[i][j]
// using namespace std;
// //-------------------------------------------------------------------


// //*******************************************************************
// void solve()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>v[i];
//     }
//     string str;
//     cin>>str;
//     vector<int> one;
//     vector<int> two;

//     for(int i=0;i<n;i++){
//         if(str[i]=='1')
//         one.push_back(v[i]);
//         else    
//         two.push_back(v[i]);
//     }

//     sort(one.begin(),one.end());
//     sort(two.begin(),two.end());

//     unordered_map<int,int> mp;
//     int s1=one.size();
//     int s2=two.size();
//     int num=n;
//     for (int i = s1-1; i >=0 ; i--)
//     {
//         mp[one[i]]=num--;
//     }
//     for (int i = s2-1; i >=0 ; i--)
//     {
//         mp[two[i]]=num--;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout<<mp[v[i]]<<" ";
//     }
//     cout<<endl;
    

// }
// //*******************************************************************

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     //   clock_t z = clock();

//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
//     return 0;
// }

#include <iostream>
#include <string>
#include <ranges>

int main() {
    std::string s = "1023004050";
    auto count = std::ranges::count(s, '0');

    std::cout << "The number of '0's in the string is: " << count << std::endl;

    return 0;
}

