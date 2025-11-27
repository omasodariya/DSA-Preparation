//------------------------------------------------------------------
#include<bits/stdc++.h>
#define endl '\n'
#define outn(n) cout<<n<<endl
#define test(t) while(t--)
#define fori(i,n) for(int i=0;i<n;i++)
#define ford(i,n) for(int i=n-1;i>=0;i--)
#define arrin(arr,n) fori(i,n) cin>>arr[i]
#define arrout(arr,n) fori(i,n) cout<<arr[i]
#define arr2din(arr,n,m) fori(i,n) fori(j,m) cin>>arr[i][j]
using namespace std;
//-------------------------------------------------------------------


//*******************************************************************

int romanToInt(string s) {
    int length=s.size();
    int ans=0;
    for (int i = s.size()-1; i>=0; i--)
    {
        switch (s[i])
        {
        case 'I':
                if (ans>3)
                    ans-=1;
                else
                    ans+=1;    
                
            
            break;
        case 'V':
                if (ans>5)
                    ans-=5;
                else
                    ans+=5;    
            
            break;
        case 'X':
                if (ans>40)
                    ans-=10;
                else
                    ans+=10;    
            
            break;
        case 'L':
                if (ans>50)
                    ans-=50;
                else
                    ans+=50;    
            
            break;
        case 'C':
                if (ans>400)
                    ans-=100;
                else
                    ans+=100;    
            
            break;
        case 'D':
                if (ans>500)
                    ans-=500;
                else
                    ans+=500;    
            
            break;
        case 'M':
                if (ans>4000)
                    ans-=1000;
                else
                    ans+=1000;    
            
            break;

        }
    }
    
        return ans;
    }
//*******************************************************************



int main()
{
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
  freopen("input.txt",  "r",  stdin);
  freopen("output.txt", "w", stdout);
#endif
 
  clock_t z = clock();
  int t;
  cin>>t;
  while(t--){
string s;
cin>>s;
cout<<romanToInt(s)<<endl;

  }



cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
return 0;
}