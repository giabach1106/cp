#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second

using namespace std;
const int maxn = 1e5 + 10;
int A[maxn];
ll n,m,k,t;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
int solve(ll x, ll y){
	if (abs(x) == abs(y) or (x==0 or y==0)) return 0;
	if ( x > 0 and y > 0){
		if( x < y)
			return 1;
		else return 2;
	}
	if ( x > 0 and y<0){
		if(x < abs(y))
			return 4;
		else return 3;
	}
	if ( x < 0 and y < 0){
		if(x < y)
			return 6;
		else return 5;
	}
	if(x < 0 and y > 0){
		if(abs(x) < y)
			return 8;
		else return 7;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	ll x,y;
	cin >> x >>y;
	cout << solve(x,y);
  return 0;
}
// cout<<setprecision(3)<<fixed<<