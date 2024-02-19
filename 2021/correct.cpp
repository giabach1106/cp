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
int A[maxn];
ll n,m,k,t,res= 0,a,b,c,sum = 0,dem,tich = 1;
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
	cin >> a >> b >> c;
	if(c%2 == 0){
		if(a%2 == 0) res++,a++;
		if(b%2 == 0) res++,b--;
		
		res += (b-a)/2;
	}
	else{
		ll tmp = c-1-a%c;
		ll ck = (c+1)/2;
		ll solan = (b-a)/c;
		
		a+= tmp + solan*c;
		res += tmp/2 + tmp%2 + solan*ck;
		res += (b-a)/2 + (b-a)%2;
	}
	cout << res << endl;
  return 0;
}
// cout<<setprecision(3)<<fixed<<