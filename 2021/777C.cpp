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
const int maxn = 110;
char A[maxn][maxn];
ll n,m,t;
bool check;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
void Print(bool dem){
	if(dem == 1)
		cout <<"YES" << endl;
	else cout << "NO" << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> t;
	for(ll i =1;i<=100;i++){
		A[i][0] = '1';
		A[0][i] = A[i][0];
	}
	while(t--){
		vector< pair<pair<ll,ll>,pair<ll,ll> > > vpair;
		cin >> n >> m;
		for(ll i = 1;i<=n;i++){
			for(ll j = 1;j<=m;j++){
				cin >> A[i][j];
			}
		}
		if(A[1][1] == '1')
			cout <<"-1" << endl;
		else{
		//ll x = n,y = m;
		for(ll x = n;x;x--){
			for(ll y = m;y;y--){
				if(A[x][y] == '1'){
					if(x!= 1) vpair.pb(mp(mp(x-1,y),mp(x,y)));
					else vpair.pb(mp(mp(x,y-1),mp(x,y)));
				}
			}
		}
			cout << vpair.size() << endl;
			for(ll i=0;i<vpair.size() ;i++){
				cout << vpair[i].fi.fi << " " << vpair[i].fi.se << " " << vpair[i].se.fi << " "<< vpair[i].se.se << endl;
			}
		}
	}
  return 0;
}
// cout<<setprecision(3)<<fixed<<
/*
#	kiroz
#     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/