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
ll A[maxn];
ll n,m,k,t,res= 0,a,b,c,x,y,z;
//string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
void sinh(ll n){
	// n%2 == 0 -> 4
	// else ->7
	// n--, sinh
	
	n--;
	if(n == 0){
		cout << 4;
		return;
	}
	if(n == 1){
		cout << 7;
		return;
	}
	sinh(n/2);
	if(n%2==0) cout << 4;
	else cout << 7;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	// file();
	cin >> n;
	// 4 7 44 47 74 77 444 447 474 477 744 747 777
	sinh(n);
  return 0;
}
// cout<<setprecision(3)<<fixed<<
/*
#	  kiroz
#     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/