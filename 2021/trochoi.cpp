#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define mp make_pair
using namespace std;
const int maxn = 1e5 + 10;
int A[310][310],D[maxn];
ll n,m,k,t,res= 0;
string s;
vector <pair<ll,ll> > V;
map<ll,ll> MAP;
pair <ll,ll> p;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
bool cmp(pair <ll, ll> a, pair <ll, ll> b){
    return a.second > b.second;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> m >> n >> k;
	for(ll i = 1;i<=m;i++){
		for(ll j =1;j<=n;j++){
			cin >> A[i][j];
			MAP[A[i][j]]++;
		}
	}
	for (map<ll,ll>::iterator it = MAP.begin(); it!=MAP.end() ;++it){
		p = *it;
        V.pb(p);
    }
    sort(V.begin(),V.end(),cmp);
	for(ll i = 0;i<min((ll)V.size(),k);i++)
		res += V[i].se;
	cout << res;
  return 0;
}
// cout<<setprecision(3)<<fixed<<