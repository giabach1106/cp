#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
#define pll pair<ll , ll>
#define mp make_pair
using namespace std;
const int maxn = 2e3 +5 ;
int A[maxn];
ll n,m,k,t,res= 0,len,F[maxn][maxn];
string s,ans;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
void para(int i, int j, int L, int R){
	if (L > R) return ;
	if (i == j) ans[L] = s[i];
	else {
		if (s[i] == s[j]) {
			ans[L] = ans[R] = s[i];
			para(i+1, j-1, L+1, R-1);
		} else {
			if (F[i][j] == F[i+1][j])
				para(i+1, j, L, R);
			else
				para(i, j-1, L, R);
		}
	}
}
void solve(){
	for(ll i = n ; i >= 0 ; i--)
		for(ll j = i ; j <= n ; j++){
			if (i == j) F[i][j] = 1;
			else{
				if(s[i] == s[j]) {
					if(i == j-1)
						F[i][j] = 2;
					else
						F[i][j] = F[i+1][j-1] + 2;
				}
				else
					F[i][j] = max(F[i+1][j], F[i][j-1]);
			}
		}
	ans.resize(F[0][n]);
	para(0,n,0, F[0][n]-1);
	cout << ans;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> s;
    n = s.size()-1;
	solve();
	
  return 0;
}
// cout<<setprecision(3)<<fixed<<