#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 10e5+5 ;
int A[maxn];
ll n;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
}
void MAIN() {
  int n, k;
  cin >> n >> k;
  vector<pair<long long, long long>> p;
  for (int i = 0; i < n; ++i) {
    long long x, y;
    cin >> x >> y;
    p.emplace_back(x, 1);
    p.emplace_back(++y, -1);
  }
  sort(p.begin(), p.end());
  debug(p);
  long long s = p[0].second;
  long long ans = 0;
  for (int i = 1; i < (int) p.size(); ++i) {
    s += p[i].second;
    if (s == k) {
      long long l = p[i - 1].first;
      long long r = p[i].first;
      ans += r - l + 1;
      debug(l, r);
    }
    debug(s, ans);
  }
  cout << ans << '\n';
}
	
	return 0;
}


