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
int n, k;
int ss[MAXN + 5], len[MAXN + 5], cur;
bool bio[MAXN + 5];
vector <pii> ms[MAXN + 5], v;
ll f[MAXN + 5], sol;

void dfs1(int x, int p){
	cur++;
	ss[x] = 1;
	for(vector <pii>::iterator i = ms[x].begin() ; i != ms[x].end() ; ++i){
		pii o = *i;
		if(o.x == p || bio[o.x])
			continue;
		len[o.x] = len[x] + 1;
		dfs1(o.x, x);
		ss[x] += ss[o.x];
	}
}

int dfs2(int x, int p){
	for(vector <pii>::iterator i = ms[x].begin() ; i != ms[x].end() ; ++i){
		int o = i->x;
		if(o == p || bio[o])
			continue;
		if(ss[o] * 2 > cur)
			return dfs2(o, x);
	}
	return x;
}

bool cmp(pii x, pii y){
	if(x.y != y.y)
		return x.y < y.y;
	return x.x < y.x;
}

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

void dfs3(int x, int p, int maxi){
	v.push_back(mp(x, maxi));
	for(vector <pii>::iterator i = ms[x].begin() ; i != ms[x].end() ; ++i){
		pii o = *i;
		if(o.x == p || bio[o.x])
			continue;
		dfs3(o.x, x, max(maxi, o.y));
	}
}

void decompose(int root){
	cur = 0;
	len[root] = 0;
	dfs1(root, -1);
	int centroid = dfs2(root, -1);
	cur = 0;
	len[centroid] = 0;
	dfs1(centroid, -1);
	dfs3(centroid, -1, 0);
	sort(v.begin(), v.end(), cmp);
	for(int i = 0 ; i < (int)v.size(); ++i){
		pii o = v[i];
		sol += query(o.y - len[o.x] - k);
		update(len[o.x], 1);
	}
	for(int i = 0 ; i < (int)v.size() ; ++i){
		pii o = v[i];
		update(len[o.x], -1);
	}
	v.clear();
	for(vector <pii>::iterator i = ms[centroid].begin() ; i != ms[centroid].end() ; ++i){
		pii o = *i;
		if(bio[o.x])
			continue;
		dfs3(o.x, centroid, o.y);
		sort(v.begin(), v.end(), cmp);
		for(int j = 0 ; j < (int)v.size() ; ++j){
			pii u = v[j];
			sol -= query(u.y - len[u.x] - k);
			update(len[u.x], 1);
		}
		for(int j = 0 ; j < (int)v.size() ; ++j){
			pii u = v[j];
			update(len[u.x], -1);
		}
		v.clear();
	}
	bio[centroid] = 1;
	for(vector <pii>::iterator i = ms[centroid].begin() ; i != ms[centroid].end() ; ++i){
		int o = i->x;
		if(bio[o])
			continue;
		decompose(o);
	}
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
cin >> n >> k;
for(int i = 0 ; i < n - 1 ; ++i){
	int x, y, w;
	cin >> x >> y >> w;
	ms[x].push_back(mp(y, w));
	ms[y].push_back(mp(x, w));
}
decompose(1);
sol = sol * 2LL;
cout << sol << endl;

return 0;
}

