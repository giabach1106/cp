#include <bits/stdc++.h>
using namespace std;
#define ll long long;
const int maxn = 60010;
int A[maxn],n,B[maxn],Dp[maxn*2];
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
	for(int i=1;i<=n-1;i++)
		cin >> B[i];
	Dp[0] = A[0];
	Dp[1] = min(Dp[0]+A[1],B[0]);
	for(int i=3;i<=n;i++)
		Dp[i] = min(Dp[i-1] + A[i],B[i-1]+ Dp[i-2]);
	cout << Dp[n-1];
	return 0;
}