#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 10e5+5 ;
int A[maxn],F[maxn];
ll n;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	map<int,int> m;
	cin >> n;
	ll check1=1, check0=0;
	int ans = 0;
	for(int i=0;i<n;i++){
		bool x;
		cin >> x;
		if(x) check1++;
		else check0++;
		ll d = check0-check1;
		if(m.count(d))
			ans = max(ans, i - m[d]);
		else m[d] = i;
	}cout << ans;
		
	return 0;
}


