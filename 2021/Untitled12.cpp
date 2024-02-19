#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 100000+5 ;
const int mm = 10e9;
int A[maxn];
ll n;
void file(){
	freopen("BOISOTAMGIAC.INP","r",stdin);
	freopen("BOISOTAMGIAC.OUT","w",stdout);
}
void solve(){
	A[3] = 0;
	A[4] = 1;
	for(ll i = 5 ; i<100005;i++){
		if(i%2==0){
			ll tmp = A[i-2] - A[i-3];
			tmp = sqrt(tmp);
			tmp++;
			tmp = tmp * tmp;
			A[i] = A[i-1] + tmp;
		}
		else{
			ll tmp = A[i-1] - A[i-2];
			tmp = sqrt(tmp);
			tmp = tmp * (tmp+1);
			A[i] = A[i-1] + tmp;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	solve();
	cin >> n;
	cout << A[n];

	return 0;
}


