#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 505 ;
int A[maxn],a[maxn][maxn];
int n,q,x[maxn],y[maxn],u[maxn],v[maxn],t[maxn][maxn],d[maxn][maxn];
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int qu(int x, int y, int u, int v){
	int w,b;
	w = t[u][v]-t[x-1][v]-t[u][y-1]+t[x-1][y-1];
	b = d[u][v]-d[x-1][v]-d[u][y-1]+d[x-1][y-1];
	return abs(w-b);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
		}
	}
	cin >> q;
	for(int i=1;i<=q;i++){
		cin >> x[i] >> y[i] >> u[i] >> v[i];
	}
	memset(t, 0, sizeof(t));
	memset(d, 0, sizeof(d));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			t[i][j]=t[i-1][j]+t[i][j-1]-t[i-1][j-1];
			d[i][j]=d[i-1][j]+d[i][j-1]-d[i-1][j-1];
			if((i+j)%2 == 0)
				t[i][j]=t[i][j]+a[i][j];
			else d[i][j]=d[i][j]+a[i][j];
		}
	}
	for(int i=1;i<=q;i++){
		cout << qu(x[i],y[i],u[i],v[i]) << endl;
	}
	return 0;
}


