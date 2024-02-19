#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef pair <int, int> pii;
#define x first
#define y second
#define mp make_pair

const int MAXN = (int)1e5;
int n, k, a[MAXN + 5];
vector <pii> v;
ll f[MAXN + 5], sol;

void update(int x, ll y){
	x++;
	for(int i = x ; i <= MAXN + 2 ; i += (i & -i)){
		f[i] += y;
	}
}

ll query(int x){
	ll ret = 0;
	x++;
	for( ; x > 0 ; x -= (x & -x)){
		ret += f[x];
	}
	return ret;
}

void procesiraj_aktivne(ll pred){
	sort(v.begin(), v.end());
	for(int i = 0 ; i < (int)v.size() ; ++i){
		sol = sol + pred * query(v[i].x - v[i].y - k);
		update(v[i].y, 1);
	}
	for(int i = 0 ; i < (int)v.size() ; ++i){
		update(v[i].y, -1);
	}
	v.clear();
}

void rek(int l, int r){
	if(l >= r)
		return;
	int mid = (l + r) / 2;
	rek(l, mid);
	rek(mid + 1, r);
	int maxi = 0;
	for(int i = mid ; i >= l ; --i){
		v.push_back(mp(maxi, mid - i));
		maxi = max(maxi, a[i - 1]);
	}
	maxi = 0;
	for(int i = mid ; i < r ; ++i){
		maxi = max(maxi, a[i]);
		v.push_back(mp(maxi, i - mid + 1));
	}
	procesiraj_aktivne(1);
	maxi = 0;
	for(int i = mid ; i >= l ; --i){
		v.push_back(mp(maxi, mid - i));
		maxi = max(maxi, a[i - 1]);
	}
	procesiraj_aktivne(-1);
	maxi = 0;
	for(int i = mid ; i < r ; ++i){
		maxi = max(maxi, a[i]);
		v.push_back(mp(maxi, i - mid + 1));
	}
	procesiraj_aktivne(-1);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
cin >> n >> k;
for(int i = 1 ; i < n ; ++i){
	int x, y, w;
	cin >> x >> y >> w;
	a[i] = w;
}
rek(1, n);
sol *= 2LL;
cout << sol << endl;

return 0;
}

