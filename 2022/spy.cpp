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
const int maxn = 1e5 + 10;
int A[maxn],B[maxn];
ll n,m,k,t,res= 0;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
void solve(){
	if(A[1] != A[2] and A[2] == A[3])
		cout << 1 << endl;
	else{
		for(ll i = 1;i<=n-1;i++){
			if(A[i] != A[i+1]){
				cout << i+1 << endl;
				return;
			}	
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> t;
	while(t--){
		cin >> n;
		for(ll i = 1; i <= n;i++)
			cin >> A[i];
		solve();
	}
	
  return 0;
}
// cout<<setprecision(3)<<fixed<<