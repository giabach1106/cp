#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 10e5+5 ;
int A[maxn],B[maxn];
ll n;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> A[i];
	for(int i=0;i<n;i++)
		cin >> B[i];
	sort(A,A+n);
	sort(B,B+n);
	ll tong = A[0] +B[0];
	for(int i=0;i<n;i++){
		ll f = lower_bound(B,B+n,A[i]) -B;
		if(A[i]+B[f] < tong) tong = A[i]+ B[i];
		if(A[i] +B[f-1] < tong) tong = A[i] + B[f-1];
	}cout << tong;
	return 0;
}


