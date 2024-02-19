#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()

using namespace std;
const ll maxn = 1e7 + 10;
int A[maxn];
ll n;
void file() {
  freopen("FINDDANTE.INP", "r", stdin);
  freopen("FINDDANTE.OUT", "w", stdout);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	vector<ll> v;
	map <ll,int> M;
	while(cin >> n){
		M[n]++;
		if(M[n] ==1) v.push_back(n);
	}
	for(ll i = 0;i<v.size();i++)
		if(M[v[i]]%2==1)
			cout << v[i];
  return 0;
}
// cout<<setprecision(3)<<fixed<<