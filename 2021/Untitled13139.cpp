#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 2020 ;
int F[maxn][maxn];
//ll n,m;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	string A,B;
	cin >> A >> B;
	for(int i=0;i<A.size();i++){
		for(int j=0;j<B.size();j++){
			if(A[i] == B[j])
				F[i+1][j+1] = F[i][j] + 1;
			else F[i+1][j+1] = max(F[i][j+1], F[i+1][j]);
		}
	}cout  << F[A.size()][B.size()];
	
	return 0;
}


