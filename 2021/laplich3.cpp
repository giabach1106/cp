#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
using namespace std;
const int maxn = 1e5 + 10;
//int a[maxn];
pair<ll,ll> a[101];
ll n,m,k,t,res= 0,sum = 0,tmp = 0,ans = 0;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
bool cmp(pair<ll,ll> a, pair<ll,ll> b){
	return a.second > b.second;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> n;
	for(int i = 0;i<n;i++) 
		cin >> a[i].fi >> a[i].se;

	sort(a,a+n,cmp);
	for(int i = 0;i<n;i++){
		tmp += a[i].fi;
		ans = max(ans,tmp + a[i].se);
	}
	cout << ans;
  return 0;
}
// cout<<setprecision(3)<<fixed<<