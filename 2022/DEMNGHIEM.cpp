#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()

using namespace std;
const int maxn = 10e5 + 10;
int A[maxn];
ll n;
pair<ll,ll> p[maxn];
void file() {
  freopen("DEMNGHIEM.INP", "r", stdin);
  freopen("DEMNGHIEM.OUT", "w", stdout);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	 file();
	ll a, b,c;
	ll dem = 0;
	cin >> a >> b >> c;
	for (int x = 1; x < c / a; x++){
        if ((c - a * x) % b == 0){
            int y = (c - a * x) / b;
            if (__gcd(x, y) == 1) dem++;
        }
    }
	cout << dem;
	
  return 0;
}
// cout<<setprecision(3)<<fixed<<