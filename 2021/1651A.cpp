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
ll n,m,k,t,res= 0;
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
	cin >> t;
	while(t--){
		cin >> n;
		if(n%2==0)
			cout << pow(n,2) -1 << endl;
		else if(n%2 == 1 and n != 1)
			cout << pow(n,2) -2 << endl;
		else cout << 1 << endl;
	}
	
  return 0;
}
// cout<<setprecision(3)<<fixed<<



