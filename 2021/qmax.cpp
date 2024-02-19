#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 110 ;
int A[maxn][maxn],F[maxn][maxn];
int n,m,ans;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n >> m;
	for(int i=1;i<=m;i++)
		F[0][i] = F[n+1][i];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin >> A[i][j];
			
	for(int j=1;j<=m;j++)
		for(int i = 1;i<=n;i++){
			F[i][j] = A[i][j] + max(F[i-1][j-1], max(F[i][j-1], F[i+1][j-1]));
		}
	for(int i=1;i<=n;i++)
		ans = max(ans, F[i][m]);
	cout << ans;
	return 0;
}


