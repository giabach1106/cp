#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second

using namespace std;
const int maxn = 2e8 + 10;
int A[maxn],s[maxn];
ll n,res=  0,t,m,k=0;
//string s;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
void solve(){
	fill(s,s+n+1,0);
	int l = 1, r= 0;
	for(ll i = 1;i<=k;i++){
		while(r != l-1 and A[i] < A[s[r]])
			r--;
		s[++r] = i;
	}cout << A[s[l]] << " ";
	for(int i = k+1;i<=n;i++){
		while(s[l] <= i-k and l != r+1)
			l++;
		while(r != l-1 and A[i] < A[s[r]])
			r--;
		s[++r] = i;
		cout << A[s[l]] << " ";
	}cout << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1;i<=n;i++)
			cin >> A[i];
		solve();
	}
  return 0;
}
// cout<<setprecision(3)<<fixed<<