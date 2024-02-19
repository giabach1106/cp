#include <bits/stdc++.h>
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define mp make_pair
using namespace std;
const int maxn = 1e5 + 10;
int A[maxn];
ll n,m,k,t,res= 0,a,b,c,x,y,z;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	// file();
	cin >> n;
	// 1 3 6 8 11 13 16 18 21 23 26 28 31 33 36
	// 1 6 11 16 21 26 31 +5
	// 3 8 13 18 23 28 33 +5
	if(n%2==0) cout << (n/2-1)*5+3;
	else cout << ((n+1)/2-1)*5+1;
  return 0;
}
// cout<<setprecision(3)<<fixed<<
/*        
#
#	  kiroz
#     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/