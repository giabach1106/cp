#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 1005 ;
int A[maxn];
ll n,k,ans,S;
int F[maxn][maxn];
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n >> k;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			cin >> F[i][j];
			 F[i][j] += F[i-1][j] + F[i][j-1] - F[i-1][j-1];
		}
	for(int i=k;i<=n;i++){
		for(int j=k;j<=n;j++){
			 S = F[i][j] - F[i-k][j] - F[i][j-k] + F[i-k][j-k];
			ans = max(ans, S);
			
		}
	}
	cout << ans;
	return 0;
}


