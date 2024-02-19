#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 110 ;
int A[maxn],B[maxn],C[maxn];
ll n;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> A[i] >> B[i] >> C[i];
	int x=0,y=0,z=0;
	for(int i=0;i<n;i++){
		x+=A[i];
		y+=B[i];
		z+=C[i];
	}if(x == 0 && y == 0 && z == 0)
		cout << "YES";
	 else cout << "NO";
	return 0;
}
//cout<<setprecision(3)<<fixed<<