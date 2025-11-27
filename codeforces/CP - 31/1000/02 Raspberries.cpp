// -------------------- Includes -------------------- //
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
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

// -------------------- Typedefs -------------------- //

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;

// -------------------- Defines -------------------- //

#define pr pair
#define mpr make_pair
#define ff first
#define ss second

#define mset multiset
#define mmap multimap
#define uset unordered_set
#define umap unordered_map
#define umset unordered_multiset
#define ummap unordered_multimap
#define pqueue priority_queue

#define yes cout<<"YES"<<endl

#define sz(x) (int((x).size()))
#define len(x) (int((x).length()))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define clr(x) (x).clear()

#define pf push_front
#define pb push_back
#define popf pop_front
#define popb pop_back
#define ft front
#define bk back

#define lb lower_bound
#define ub upper_bound
#define bs binary_search

// -------------------- Constants -------------------- //

const int MAX = int(1e9 + 5);
const ll MAXL = ll(1e18 + 5);
const ll MOD = ll(1e9 + 7);
const ll MOD2 = ll(998244353);

// -------------------- Functions -------------------- //

void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	return;
}

void precision(int x)
{
	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(x);
	return;
}

ll gcd(ll a, ll b)
{
	while (b) {
		a %= b;
		swap(a, b);
	}
	return a;
}

ll lcm(ll a, ll b)
{
	return a / gcd(a, b) * b;
}

bool is_prime(ll a)
{
	if (a == 1) {
		return false;
	}
	for (ll i = 2; i * i <= a; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}

bool is_square(ll a)
{
	ll b = ll(sqrt(a));
	return (b * b == a);
}

bool is_cube(ll a)
{
	ll b = ll(cbrt(a));
	return (b * b * b == a);
}

int digit_sum(ll a)
{
	int sum = 0;
	while (a) {
		sum += int(a % 10);
		a /= 10;
	}
	return sum;
}

ll binpow(ll a, int b)
{
	ll ans = 1;
	while (b) {
		if ((b & 1) == 1) {
			ans *= a;
		}
		b >>= 1;
		a *= a;
	}
	return ans;
}

ll binpow_by_mod(ll a, ll b, ll mod)
{
	ll ans = 1;
	while (b) {
		if ((b & 1) == 1) {
			ans *= a;
			ans %= mod;
		}
		b >>= 1;
		a *= a;
		a %= mod;
	}
	return ans;
}

ll factorial(int a)
{
	ll ans = 1;
	for (int i = 2; i <= a; i++) {
		ans *= ll(i);
	}
	return ans;
}

ll factorial_by_mod(int a, ll mod)
{
	ll ans = 1;
	for (int i = 2; i <= a; i++) {
		ans *= ll(i);
		ans %= mod;
	}
	return ans;
}

// -------------------- Solution -------------------- //

/*const int N = 200005;
int a[N];
int n;*/

void solve()
{
	int n,k;
    cin>>n>>k;
    int mn=INT_MAX;
    int e=0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        e+=!(a&1);
        if(a%k==0){
         mn=0;   
        }
        mn=min(mn,k-a%k);
    }
    if(k==4){
    cout<<min(max(0,2-e),mn)<<endl;
    }
    else
    cout<<mn<<endl;
    return;
}

void precalc()
{
	return;
}

int main()
{
	fastio();

	precalc();

	int tests = 1, tc;
	cin >> tests;
	for (tc = 1; tc <= tests; tc++) {
		solve();
	}

	//cout << db(clock()) / CLOCKS_PER_SEC << endl;

	return 0;
}

