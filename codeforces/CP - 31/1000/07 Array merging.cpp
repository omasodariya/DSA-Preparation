// -------------------- Includes -------------------- //
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <array>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <list>
#include <iterator>
#include <numeric>
#include <complex>
#include <tuple>
#include <utility>
#include <cassert>
#include <assert.h>
#include <climits>
#include <limits.h>
#include <ctime>
#include <time.h>
#include <random>
#include <chrono>
#include <fstream>
using namespace std;

void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	return;
}

void solve()
{
    int n;
    cin>>n;
	int a[n],b[n];
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        cin>>b[i];
    }
    int cnt=0;
    int mx=1;
    unordered_map<int,int> mp2;
    mp[a[0]]++;
    for (int i = 1; i < n; i++)
    {   
        if(a[i-1]!=a[i]){
            mp[a[i-1]]=max(mp[a[i-1]],cnt+1);
            cnt=0;
            if(i==n-1)
            mp[a[i]]=max(mp[a[i]],1);
        }else{
            cnt++;
            if(i==n-1)
            mp[a[i]]=max(mp[a[i]],cnt+1);
        }
            mx=max(mp[a[i]],mx);
    }
    cnt=0;
    mp2[b[0]]++;
    for (int i = 1; i < n; i++)
    {   
        if(b[i-1]!=b[i]){
            mp2[b[i-1]]=max(mp2[b[i-1]],cnt+1);
            cnt=0;
            if(i==n-1)
            mp2[b[i]]=max(mp2[b[i]],1);
        }else{
            cnt++;
            if(i==n-1)
            mp2[b[i]]=max(mp2[b[i]],cnt+1);
        }
    }



    for (int i = 1; i <= 2*n; i++)
    {
        mx=max(mx,mp[i]+mp2[i]);
    }
        
    cout<<mx<<endl;
}

int main()
{
	fastio();

	int tests = 1, tc;
	cin >> tests;
	for (tc = 1; tc <= tests; tc++) {
		solve();
	}

	return 0;
}

