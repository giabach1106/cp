#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second

using namespace std;
const int maxn = 1e3 + 10;
int A[maxn];
ll n,k;

void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> n >> k;
	for(int i = 1;i<=n;i++)
		cin >> A[i];
	sort(A+1,A+n+1);
	ll ans = 0;
	for(ll i =1;i<=n;i++){
		if(i%k!=0)
			ans+=A[i];
	}cout << ans;
  return 0;
}
// cout<<setprecision(3)<<fixed<<