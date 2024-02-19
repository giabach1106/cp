#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 10e5+5 ;
int A[maxn];
ll n;
void file(){
	freopen("Phim.INP","r",stdin);
	freopen("Phim.OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	ll ans=5;
	cin >> n;
	if(n==1) cout << 9;
	else{
		while(n>2){
			ans = ans*2-1;
			n--;
		}
		cout << ans*ans;
	}
	return 0;
}


