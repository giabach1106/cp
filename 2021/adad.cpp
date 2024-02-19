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
ll n,m,k,t,res= 0,a,b,c,y,z;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
int kk(int x1, int x2, int y1, int y2){
	int res = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
	return res;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	// file();
	pair <ll,ll> x[3];
	for(ll i = 0;i<2;i++)
		scanf("%d %d", &x[i].fi, &x[i].se);
	int a = kk(x[0].fi,x[1].fi,x[0].se,x[1].se);
	int b = kk(x[0].fi,x[2].fi,x[0].se,x[2].se);
	int c = kk(x[1].fi,x[2].fi,x[1].se,x[2].se);
	printf("%d %d %d\n", a,b,c);
	int p = (a+b+c)/2;
	printf("chu vi: %d \ndien tich: %.f",p*2,sqrt(abs(p*(p-a)*(p-b)*(p-c)))); // cong thuc heron
  return 0;
}
// cout<<setprecision(3)<<fixed<<
