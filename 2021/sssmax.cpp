#include <bits/stdc++.h>
using namespace std;
const int maxn = 10e5+5;
int A[maxn],n; long long f[maxn];
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	int q;
	cin >> n >> q;
	for(int i=1;i<=n;i++)
		cin >> A[i];
	for(int i=1;i<=n;i++){
			if(A[i] >= 0) f[i] = f[i-1] + A[i];
			else f[i] = f[i-1];
		}
	while(q--){
		int l,r;
		long long tong;
		cin >> l >> r;
		f[0] = 0;
		tong = f[r] - f[l-1];
		cout << tong << endl;	
	}

	return 0;
}