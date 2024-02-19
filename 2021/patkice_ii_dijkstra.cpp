#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double lf;
typedef long double Lf;
typedef pair <int,int> pii;
typedef pair <ll, ll> pll;

#define TRACE(x) cerr << #x << "  " << x << endl
#define FOR(i, a, b) for (int i = (a); i < int(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define all(x) (x).begin(), (x).end()
#define _ << " " <<

#define fi first
#define sec second
#define mp make_pair
#define pb push_back

struct State {
  int dist;
  int a, b, c, d;

  State(){}
  State(int _dist, int _a, int _b, int _c, int _d) {
    dist = _dist;
    a = _a;
    b = _b;
    c = _c;
    d = _d;
  }

  friend bool operator < (const State &a, const State &b) {
    return a.dist > b.dist;
  }
};

const int MAXN = 2005;

const int smjerx[] = {0, 0, -1, 1};
const int smjery[] = {1, -1, 0, 0};
const string znak = "><^v";

int n, m;
char s[MAXN][MAXN];

priority_queue <State> q;

bool bio[MAXN][MAXN];
pii odkud[MAXN][MAXN];

int dijkstra() {
  while (!q.empty()) {
    while (!q.empty() && bio[q.top().a][q.top().b]) q.pop();
    State t = q.top();
    q.pop();
    bio[t.a][t.b] = 1;
    odkud[t.a][t.b] = {t.c, t.d};
    if (s[t.a][t.b] == 'x') {
      return t.dist;
    }

    REP(i, 4) {
      int nx = t.a + smjerx[i];
      int ny = t.b + smjery[i];
      if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
      if (bio[nx][ny]) continue;
      q.push(State(t.dist + (s[t.a][t.b] != znak[i]), nx, ny, t.a, t.b));
    }
  }
  assert(0);
  return -1;
}

void recon() {
  int x, y;
  REP(i, n) REP(j, m) if (s[i][j] == 'x') {
    x = i;
    y = j;
  }
  while (s[x][y] != 'o') {
    int nx = odkud[x][y].fi;
    int ny = odkud[x][y].sec;
    REP(i, 4) {
      if (nx + smjerx[i] == x && ny + smjery[i] == y) {
        if (s[nx][ny] != 'o') s[nx][ny] = znak[i];
        break;
      }
    }
    x = nx;
    y = ny;
  }
  REP(i, n) {
    REP(j, m) {
      printf("%c",s[i][j]);
    }
    puts("");
  }
}

int main() {
  scanf("%d %d",&n,&m);
  REP(i, n) scanf("%s",s[i]);

  REP(i, n) {
    REP(j, m) {
      if (s[i][j] == 'o') q.push(State(0, i, j, -1, -1));
    }
  }

  printf("%d\n",dijkstra() - 1);
  recon();
  return 0;
}

