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

const int MAX = 1e7 + 5;


vector<int> primes;
bool sieved[MAX+10];
int A, B, C, D;

void precompute_primes() {
  for (int p = 2; p < MAX; p++) {
    if (!sieved[p]) primes.push_back(p);
    for (int i = p; i < MAX; i += p) {
      sieved[i] = true;
    }
  }
}

int val(int p, int A) {
  if (A == 0) return 0;
  return A/p + val(p, A/p); 
}

void solve() {
  for (auto p: primes) {
    if (val(p, B) + val(p, C) > val(p, A) + val(p, D)) {
      TRACE(p);
      cout << "NE" << endl;
      return;
    }
  } 
  cout << "DA" << endl;
}

void load() {
  cin >> A >> B >> C >> D;
  A--; C--;
}

int main() {
  ios_base::sync_with_stdio(false);
  precompute_primes();
  int T;
  cin >> T;
  REP(tt, T) {
    load();	
    solve();
  }
  return 0;
}



