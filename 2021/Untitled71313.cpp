#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 100005 ;
int A[maxn],L[maxn],R[maxn];
ll n,ans;
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
	for(int i=1;i<=n;i++)
		L[i] = max(L[i-1],A[i-1]);
	for(int i=n;i>=1;i--){
		R[i] = max(R[i+1],A[i+1]);
	}
	for (int i=1; i<=n; i++) 
		ans = ans+ max((min(L[i],R[i])-A[i]),0);
	cout << ans;
	return 0;
}


