#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
using namespace std;
const int maxn = 310;
ll n,m,k,t,res= 0;
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
		string s;char a;
		int A[maxn] = {0};
		cin >> s;
		for(ll i = 0;i<s.size();i++){
			if(i%2 == 0)
				A[s[i]] = 1;
		}
		cin >> a;
		if(A[a] == 1)cout <<"YES" << endl;
		else cout << "NO" << endl ;
		
		
	}
	
  return 0;
}
// cout<<setprecision(3)<<fixed<<