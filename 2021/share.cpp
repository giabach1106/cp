#include <bits/stdc++.h>
using namespace std;
const int maxn = 10e5+1 ;
int A[maxn];
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
void nhap(){
	int tong=0,tongg;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
		cin >> A[i];
	sort(A,A+n+1);
	for(int i=1;i<=n;i++){
		tong = tong +A[i];
		if(tong + (n-i)*A[i] >m){ 
			tongg = tong -A[i];
			break;
		}
	}int tong1,tong2;
	tong1= ceil(tong/(n-i));
	tong2 = ceil(tongg/(n-i+1));
	if(tong1 < tong2) cout << tong1;
	else cout << tong2;

}
void solution(){

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n,m;
	//file();
	nhap();
	//solution();
	
	return 0;
}
