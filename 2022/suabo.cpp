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
int A[maxn];
ll n,m,k,t,res= 0;
string s;

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
	sort(A,A+n,greater<int>());
	//  4 3 2 1
	//  1 2 3 4
	//->3 1 -1 -3
	//
	
	for(ll i = 0;i<n;i++)
		A[i] -=i;
	for(ll i = 0;i<n;i++)
		if(A[i] > 0 )
			res+= A[i];
	cout << res;
  return 0;
}
// cout<<setprecision(3)<<fixed<<