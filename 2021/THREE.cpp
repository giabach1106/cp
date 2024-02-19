#include <bits/stdc++.h>
using namespace std;
const int maxn = 10e5+9;
int A[maxn];
int n,k;
map <long long,long long> L,R;

void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
void nhap(){
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> A[i];
		R[A[i]]++;
	}
}
void solution(){
	long long res =0;
	L[A[0]]++;
	R[A[0]]--; R[A[1]]--;
	for(int i=1;i<n-1;i++){
		if(A[i]%k==0)
			res = res + L[A[i]/k]*R[A[i]*k];
		L[A[i]]++;
		R[A[i+1]]--;
	}cout << res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	//file();
	nhap();
	solution();
	

//cout<<setprecision(3)<<fixed<<
	return 0;
}