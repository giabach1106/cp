#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
using namespace std;
const int maxn = 1e5 + 10;
//int A[maxn];
ll n,m,temp=1,l=0,rep =0,ans = 10e9;
pair<ll,ll> p[maxn],A[maxn];
map <ll,int> M;
void file() {
  freopen("MINDIS.INP", "r", stdin);
  freopen("MINDIS.OUT", "w", stdout);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	string s;
	cin >> n >> m;
	for(ll i = 0;i<n;i++)
		cin >> A[i].fi >> A[i].se;
	sort(A,A+n);

	M[A[0].se]++;
	for(ll i = 1;i<n;i++){
		rep += A[i].fi - A[i-1].fi;
		M[A[i].se]++;
		if(M[A[i].se] == 1) 
			temp++;
		if(temp == m) {
			while(M[A[l].se]>1){
				M[A[l].se]--;
				rep -= A[l+1].fi - A[l].fi;
				l++;
			}
			ans = min(ans, rep);
		}
	} cout << ans;
  return 0;
}
// cout<<setprecision(3)<<fixed<<