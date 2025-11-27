// //------------------------------------------------------------------
// #include<bits/stdc++.h>
// #define endl '\n'
// #define ll long long
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define outn(n) cout<<n<<endl
// #define test(t) while(t--)
// #define fori(i,n) for(int i=0;i<n;i++)
// #define ford(i,n) for(int i=n-1;i>=0;i--)
// #define arrin(arr,n) fori(n) cin>>arr[i]
// #define arrout(arr,n) fori(n) cout<<arr[i]
// #define arr2din(arr,n,m) fori(i,n) fori(j,m) cin>>arr[i][j]
// using namespace std;
// //-------------------------------------------------------------------


// //*******************************************************************
// void solve(){
//     int n;
//     cin>>n;
//     bool arr[3]={true,true,false};
//     bool ans=true;
//     for (int i = 0; i < n; i++)
//     {
//       int val;
//       cin>>val;
//       if(!arr[val-1]){
//         ans=true;
//       }  
//       if(val==1){
//         arr[1]=!arr[1];
//         arr[2]=!arr[2];
//       }
//       if(val==2){
//         arr[0]=!arr[0];
//         arr[2]=!arr[2];

//       }
//       if(val==3){
//         arr[1]=!arr[1];
//         arr[0]=!arr[0];
//       }
//     }
//     if(ans)
//       cout<<"YES"<<endl;
//     else  
//       cout<<"NO"<<endl;

// }

// //*******************************************************************



// int main()
// {
//       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
// #ifndef ONLINE_JUDGE
//   freopen("input.txt",  "r",  stdin);
//   freopen("output.txt", "w", stdout);
// #endif
 
//   clock_t z = clock();

// int t=1;
// // cin>>t;
// while(t--){
//  solve();
// }

// cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
// return 0;
// }

//------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 3;
    for (int i = 0 ;i < n; ++i) {
        int x;
        cin >> x;
        if (x == c) {
            cout << "NO\n";
            return 0;
        }
        c = 6 - x - c;
    }
    cout << "YES\n";
    return 0;
}