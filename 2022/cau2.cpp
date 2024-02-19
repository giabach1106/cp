#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second

using namespace std;
const int maxn = 1e5 + 10;
int A[maxn];
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
	for(ll i = 0;i<n;i++)
		cin >> A[i];
	sort(A,A+n);
	ll dem =1;
	for(ll i = 0;i<n-1;i++){
		if(A[i]!=A[i+1])
			dem++;
	}cout << dem;
  return 0;
}
// cout<<setprecision(3)<<fixed<<