#include <bits/stdc++.h>
#define ll long long

using namespace std;
//const int maxn = 1e9+10 ;
//int A[maxn];
ll a1,b1,c1,d1;
ll a2,b2,c2,d2;

int check(ll a1,ll a2, ll b1, ll b2, ll c1, ll c2, ll d1, ll d2){
	int dem1 =0, dem2=0;
	if(a1 == c1)
		dem1++;
	if(a1 == d1)
		dem1++;
	if(a1 == b1)
		dem1++;
	if(b1 == c1)
		dem1++;
	if(b1 == d1)
		dem1++;
	if(d1 == c1)
		dem1++;
	
	if(a2 == c2)
		dem2++;
	if(a2 == d2)
		dem2++;
	if(a2 == b2)
		dem2++;
	if(b2 == c2)
		dem2++;
	if(b2 == d2)
		dem2++;
	if(d2 == c2)
		dem2++;	
	if(dem1 == 2 && dem2 == 2)
		return 1;
	else return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);


	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 >>d1 >> d2;	
	if(check(a1,a2,b1,b2,c1,c2,d1,d2)){
		if(a1 == b1)
			cout << (a2-b2)*(a2-b2);
		else if(a1 == c1)
		 cout << (a2 - c2)*(a2-c2);
		else if (a1 == d1) cout << (a2 - d2)*(a2-d2);
		else cout << (b2-c2)*(b2-c2);
		return 0;
	}cout << -1;
	return 0;
}
//cout<<setprecision(3)<<fixed<<