#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define mp make_pair
using namespace std;
const int maxn = 2e5 + 10;
int A[maxn],B[maxn];
ll n,m,k,t,res= 0,dem = 0,ans = 0,a,b,c,d,x,y,z,sum1 = 0,sum2= 0;
string s;
vector<pair<ll,ll> > V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> n;
	for(ll i = 0;i<n;i++){
		cin >> x >> y;
		V.pb(mp(x,y));
	}
	ll Max1 = V[0].fi + V[0].se;
	ll Min1 = Max1;
	ll Max2 = V[0].fi - V[0].se;
	ll Min2 = Max2;
	
	for(ll i = 1;i<n;i++){
		sum1 = V[i].fi+V[i].se;
		sum2 = V[i].fi-V[i].se;
		
		if(sum1 > Max1)
			Max1 = sum1;
		else if(sum1 < Min1)
			Min1 = sum1;
		
		if(Min2 > sum2)
			Min2 = sum2;
		else if(Max2 < sum2)
			Max2 = sum2;
	}
	cout << max(Max1 - Min1, Max2 - Min2);
  return 0;
}
// cout<<setprecision(3)<<fixed<<