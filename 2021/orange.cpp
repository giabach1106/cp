#include <bits/stdc++.h>
using namespace std;
const int maxn = 10e5+5;
int A[maxn],n;
void file(){
	freopen("Orange.INP","r",stdin);
	freopen("Orange.OUT","w",stdout)
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> A[i];
	sort(A,A+n, greater<int>());
	int Max = A[0],ans=0;
	for(int i=0;i<n;i++){
		if(A[i]!=max){
			ans = max(ans, a[i]*(n-i));
			max = A[i];
		}if(A[i-1] != max) ans = max(ans, (A[i]-1)*(n-i));
	}cout << ans;
	
	return 0;
}