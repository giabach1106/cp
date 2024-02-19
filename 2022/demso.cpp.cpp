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
ll n,k,dem=0;

void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
int check(ll m){
	ll dem1=0;
	for(int i = 1;i<=n;i++){
		if(m%i==0)
			dem1++;
	}if(dem1==k) return 1;
	else return 0;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> n >> k;
	for(int i = 1;i<=n;i++){
		if(check(i))
			dem++;
	}cout << dem;
  return 0;
}
// cout<<setprecision(3)<<fixed<<