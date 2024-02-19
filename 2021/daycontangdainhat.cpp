#include <bits/stdc++.h>
using namespace std;
const int maxn = 1010;
int A[maxn],n,B[maxn];
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();

	cin >> n;
	for(int i=1;i<=n;i++)
		cin >> A[i];
	B[1] = 1;
	for(long long i=2;i<=n;i++){
		int t= 1;
		for(long long j=1;j<=i-1;j++)
			if(A[i] > A[j])
				if(B[j]+ 1 >t)
					t = B[j]+1;
		B[i] = t;
	}long long ans = 0;
	for(long long i=1;i<=n;i++)
		if(B[i] > ans)
			ans = B[i];
	cout << ans;
	return 0;
}