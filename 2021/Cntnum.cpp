#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k, d, res;

void FastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
}

void File() {
	freopen("Cntnum.inp", "r", stdin);	
	freopen("Cntnum.out", "w", stdout);
}

int main() {
	FastIO();
	//File();
	
	cin >> n >> k >> d;
	res = n * __gcd(k, d) / d;
	cout << res;
}