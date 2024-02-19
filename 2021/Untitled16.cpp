#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 1005 ;
int A[maxn],a[maxn][maxn],F[maxn][maxn],ans=1;
ll n,m;
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
		for(int j=1;j<=n;j++)
			cin >> a[i][j];
	for(int j=1;j<=n;j++)
		F[1][j] =1;
	for(int i=1;i<=n;i++)
		F[i][1] =1;
	for(int i=2;i<=n;i++){
		for(int j=2;i<=n;j++){
			if (a[i][j] == a[i-1][j] && a[i][j] == a[i][j-1] && a[i][j] == a[i-1][j-1])
				F[i][j] = min(F[i-1][j], min(F[i][j-1], F[i-1][j-1])) + 1;
			else
				F[i][j] = 1;
		ans = max(ans, F[i][j]);
		}
	}cout << ans;
	return 0;
}


