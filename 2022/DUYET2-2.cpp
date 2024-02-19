#include <bits/stdc++.h>
#define fi first
#define se second
#define ll long long
#define pb push_back
using namespace std;
ll m=1e10, res, Pick[35];
ll a[35];
map<ll,ll> m1,m2;
int n;

void Duyet1(int x) {
	if (x > n / 2) {
		ll tmp = 0;
		for (int i = 1; i <= n / 2; i++) {
			tmp += Pick[i] * a[i];
		}
		m1[tmp]++;
	}
	else
		for (int i = -1; i <= 1; i+=2) {
			Pick[x] = (ll) i;
			Duyet1(x + 1);
		}
}

void Duyet2(int x) {
	if (x > n) {
		ll tmp=0;
		for (int i = n / 2 + 1; i <= n; i++) {
			tmp += Pick[i] * a[i];
		}
		m2[tmp]++;
	}
	else
		for (int i = -1; i <= 1; i+=2) {
			Pick[x] = (ll) i;
			Duyet2(x + 1);
		}
}
ll minnn(){
	ll res=1e10;
    for (auto b:m2) {
        auto i = m1.lower_bound(-b.first);
        if (i != m1.end()) res = min(res, abs(b.first + i->first));
        if (i != m1.begin()) res = min(res, abs(b.first + (--i)->first));
    }
	return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	Duyet1(1);
	Duyet2(n / 2 + 1);
	res=0;
	ll k=minnn();
	for (auto i:m1){
		if (k!=0) res+=i.second*(m2[k-i.first]+m2[-k-i.first]);
		else res+=i.second*(m2[-i.first]);
	}
	cout <<k << " " <<  res/2 << '\n';
}