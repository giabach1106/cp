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
const int maxt = 2e6 + 10;
int A[maxn],f[maxt],snt[maxt];
ll n,res=  0,t;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
int cnt(int x) {
	int ans = 1;
	while(x > 1) {
		int tmp = snt[x], cnt = 0;
		while(x % tmp == 0) {
			x /= tmp;
			cnt++;
		}	
		ans *= (cnt + 1);
	}	
	return ans;
}
void sieve() {
	for(int i = 1; i <= maxt; i++) { 
		snt[i] = i;
	}
	for(int i = 2; i <= maxt; i++) {
		if(snt[i] == i) {
			for(int j = i * 2; j <= maxt; j += i) { 
				snt[j] = i;
			}
		}
	}
	for(int i = 1; i <= maxt; i++) {
		f[i] = cnt(i);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	sieve();
	cin >> t;
	while(t--){
		cin >> n;
		cout << f[n] << endl;
		
	}
  return 0;
}
// cout<<setprecision(3)<<fixed<<