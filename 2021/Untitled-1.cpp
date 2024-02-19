#include <bits/stdc++.h>
using namespace std;
const int maxn = 10e5+1;
int A[maxn],t;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
void nhap(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		for(int i=0;i<n;i++)
			cin >> A[i];
	}
}
void solution(){
	int dem=0;
	sort(A,A+n);
	for(int i=0;i<n;i++){
		if(A[i] >= A[k])
			dem++;
	}cout << dem << endl;

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	//file();
	nhap();
	solution();
	
	return 0;
}
