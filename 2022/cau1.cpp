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
ll n,k;
string ans="1";

void file() {
  freopen("CAU1.INP", "r", stdin);
  freopen("CAU1.OUT", "w", stdout);
}
string nhan(string a, int b) {
	int c, carry = 0;
	string d, T = "";
	for (int i = a.size() - 1; i >= 0; i--) {
		c = (a[i] - 48) * b + carry;
		carry = c / 10;
		T = ((char) (c % 10 + 48)) + T;
	}
	
	d = "";
	if (carry > 0) {
		ostringstream convert;
		convert << carry;
		d = convert.str();
	}
	
	T = d + T;
	while (T.size() > 1 && T[0] == '0')
		T.erase(0, 1);
	return T;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//file();
	cin >> n >> k;
	for(ll i = 2;i<=n;i++){
		ans = nhan(ans,i);
	}
	for(int i = 0;i<k;i++)
		cout << ans[i];
  return 0;
}
// cout<<setprecision(3)<<fixed<<