#include <bits/stdc++.h>

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define TRACE(x) cerr << #x << " " << x << endl
#define _ << " " <<
#define debug(...) fprintf(stderr, __VA_ARGS__)
typedef long long ll;
typedef std::pair<int, int> pii;
#define X first
#define Y second
#define double long double
typedef double db;
using namespace std;

const int MaxN = 2005;
const int Mod = 1e9 + 7;
int N;
ll x[MaxN];
int h[MaxN];
int c[MaxN][MaxN];

int height(ll a) {
  assert(a >= 1);
  return 63 -__builtin_clzll(a);
}

int color(int a, int b) {
  assert(a < b);
  assert(a >= 0 && b <= 60);
  
  if (a / 4 == b / 4) return 1;
  if (a / 16 == b / 16) return 2;
  return 3; 
}

void solve() {
  REP(i, N) h[i] = height(x[i]);
  REP(i, N) cerr << h[i] << " ";
  cerr << endl << endl;
  FOR(i, 1,  N) {
    REP(j, i) {
      assert(x[i] != x[j]);
      if (x[i] % x[j] == 0) {
        c[i][j] = color(h[j], h[i]);
      } 
      else {
        c[i][j] = 1;
      }
      cout << c[i][j] << " ";
    }
    cout << endl;
  }
}

void load() {
  cin >> N; 
  REP(i, N) cin >> x[i];
}

int main() {
  ios_base::sync_with_stdio(false);
  load();
  solve();
  return 0;
}


