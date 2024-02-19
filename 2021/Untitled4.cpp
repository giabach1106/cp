#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 500005 ;
int A[maxn],dem[maxn], l = 1, r = 1;
ll ans,n;
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
	while(l <= r && r <=n){
		dem[A[r]]++;
		while(dem[A[r]] >= 3 && l < r){
				dem[A[l]]--;
				l++;
		}ans = ans + 1l*(r-l+1);
		r++;
	}cout << ans;
	return 0;
}


