#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
using namespace std;
const int maxn = 305;
//int A[maxn];
double tmp,res = 0.0;
double a[maxn][maxn];
double DP[maxn][maxn];
ll n,m,k,t;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();

    cin >> m >> n;
    for (ll i = 1; i <= m; i++)
        for (ll j = 1; j <= n; j++)
            cin >> a[i][j];
        
    
    for (ll i = 0; i < maxn; i++)
        for (ll j = 0; j < maxn; j++) DP[i][j] = 0.0; 
    for (ll j = 1; j <= n; j++){
        for (ll i = 1; i <= m; i++){
            tmp = max(max(DP[i][j-1], DP[i-1][j-1]),DP[i+1][j-1]);
            if(a[i][j] >= 0) DP[i][j] = (a[i][j] + tmp)*1.0;
            else DP[i][j] = tmp / abs(a[i][j])*1.0;
        }
    }
    for (ll i = 1; i <= m; i++)
       res = max(res,DP[i][n]);
    cout << setprecision(3) << fixed << res;
	return 0;
}