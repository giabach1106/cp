#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
using namespace std;
const int maxn = 1e5 + 10;
int a[maxn];
ll n,m,k,t,res= 0,sum = 0;
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
	cin >> n  >> k;
	for (int i = 0; i < n; i++){
    	cin >> a[i];
    	a[i] -= k;
    }
	map <ll,ll> M;
	for (int i = 0; i < n; i++) {
        sum += a[i];
        if (M.find(sum) != M.end())
            res = max(res, i - M[sum]);
        else 
            M[sum] = i;
    }cout << res;
  return 0;
}
// cout<<setprecision(3)<<fixed<<