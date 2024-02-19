#include <bits/stdc++.h>
using namespace std;
#define ll long long;
const int maxn = 25010;
int A[maxn],n,dp[maxn];
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n;
	for(int i=0;i<n-1;i++)
		cin >> A[i];
	dp[1] = A[0];
	dp[0] = 10e5;
	for(int i=2;i<n;i++)
		dp[i] = min(dp[i-1],dp[i-2]+A[i-1]);
	cout << dp[n-1];
	return 0;
}