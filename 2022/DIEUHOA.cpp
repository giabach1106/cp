#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()

using namespace std;
const int maxn = 50010;
int A[maxn],B[maxn],C[maxn],D[maxn];
ll n,m,k;
pair<ll,ll> p[maxn];
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
	cin >> m;
	for(int i = 0;i<m;i++)
		cin >> p[i].second >> p[i].first;
	sort(p,p+m);
	ll res = 0;
	for(int i =0;i<n;i++)
		for(int j = 0;j<m;j++)
			if(p[j].second >=A[i]){
				res += p[j].first;
				break;
			}else continue;
	cout << res;
  return 0;
}
// cout<<setprecision(3)<<fixed<<