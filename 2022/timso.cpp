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
ll a,b;

void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> a>>b;
	ll le=0;
	for(int i = a;i<=b;i++){
		if(i%2==1)
			le+=i;
	}
	cout << le << endl;
	cout << a/__gcd(a,b) << " " << b/__gcd(a,b) << endl;
	ll x,y;
	float delta = a*a-4*b;
	delta = sqrt(delta);
	x = (a+delta)/2;
	y = a-x;
	cout << min(x,y) << " "<<max(x,y);
  return 0;
}
// cout<<setprecision(3)<<fixed<<