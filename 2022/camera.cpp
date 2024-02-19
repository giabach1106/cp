#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
using namespace std;
const int maxn = 2e5 + 10;
int a[maxn],E[maxn],W[maxn];
ll n,m,k,t,res= 0;
string s;
deque <ll> dq, dq2;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> n;
	for(ll i = 1; i <= n; i++)
		cin >> a[i];
	cin >> s;
	for(ll i = 1; i <= n; i++) {
		W[i] = dq.size();
		if(dq.size() > 0) while(dq.size() > 0 && a[i] > dq.back()) dq.pop_back();
		dq.push_back(a[i]);
	}

	for(ll i = n; i >= 1; i--) {
		E[i] = dq2.size();
		if(dq2.size() > 0) while(dq2.size() > 0 && a[i] > dq2.back()) dq2.pop_back();
		dq2.push_back(a[i]);
	}
	
	for(ll i = 1; i <= n; i++) {
		if(s[i-1] == 'E') cout << E[i] << " ";
		else cout << W[i] << " ";
	}
	
  return 0;
}
// cout<<setprecision(3)<<fixed<<


