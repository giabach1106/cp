#include <bits/stdc++.h>
#define ll long long

using namespace std;
//const int maxn = 10e9+5 ;
//int A[maxn];
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
	ll k,res=0,dem=0;
	k = n-2;
	while(k>0){
		dem = dem+k;
		k= k-3;
	}
	for(int i=3;i<=n;i++){
		if(i%3==0 && i!=n)
			res = res + i-1 ;
		if(i%3==0 && i==n)
			res = res +1;
	}cout << res+dem;
	
	return 0;
}


