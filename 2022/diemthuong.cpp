#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second

using namespace std;
const int maxn = 1e5 + 10;
int A[maxn],f[maxn];
ll n;

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
	for(int i = 0;i<n;i++)
		cin >> A[i];
	f[0] = A[0];
	for(int i =1;i<n;i++){
		f[i] = max(f[i-1],A[i]);
	}
	for(int i =0;i<n;i++)
		cout << f[i] << " ";
  return 0;
}
// cout<<setprecision(3)<<fixed<<