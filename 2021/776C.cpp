#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
#define pb push_back
using namespace std;
const int maxn = 2e5 + 10;
pair<ll,pair<ll,ll> >A[maxn];
ll n,m,k,t,res= 0,ans = 0;
string s;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> t;
	while(t--){
		ans = 0;
		vector <pair<ll,ll> > res;
		cin >> n >> m;
		for(ll i =1;i<=m;i++) cin >> A[i].second.fi >> A[i].fi, A[i].se.se = i;
		sort(A+1,A+m+1);
		for(ll i =1;i<=n*2;i++) ans += A[i].fi, res.pb(make_pair(A[i].se.fi, A[i].se.se));
		cout << ans << endl;
		sort(res.begin(),res.end());
		for(ll i = 0;i<n;i++) cout << res[i].se << " " << res[2*n-i-1].se , cout <<  endl;
		cout << endl;
	}
	
  return 0;
}
// cout<<setprecision(3)<<fixed<<