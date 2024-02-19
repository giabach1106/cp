#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
#define pb push_back
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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> t;
	while(t--){
		cin >> n; ll tmp = n;
		vector <ll> ans;
		for(ll i =1;i<=n;i++)
			cin >> A[i];
		while(n--){
			for(ll i =1;i<=tmp;i++){
				if(A[i] == tmp){
					vector <ll> check;
					ans.pb(i%tmp);
					for(ll j = i+1;j<=tmp;j++)
						check.pb(A[j]);
					for(ll j = 1;j<=i-1;j++)
						check.pb(A[j]);
					tmp -- ;
					for(ll j = 1;j<=tmp;j++)
						A[j] = check[j-1];
					break;
				}
			}
		}
		reverse(ans.begin(),ans.end());
		for(ll i = 0;i<ans.size();i++)
			cout << ans[i] << " ";
		cout << endl;
	}
	
  return 0;
}
// cout<<setprecision(3)<<fixed<<