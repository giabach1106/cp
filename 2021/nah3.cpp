#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fi first
#define se second

using namespace std;
const int maxn = 10e5+5 ;
int A[maxn];
ll n;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}

int main(){
	//file();
	io
	pair<ll,ll> x[3];
	for(ll i = 0;i<2;i++)
		scanf("%d %d", &x[i].fi, &x[i].se);
	int a = sqrt(pow((x[1].fi - x[0].fi),2) + pow((x[1].se - x[0].se),2));
	int b = sqrt(pow((x[2].fi - x[0].fi),2) + pow((x[2].se - x[0].se),2));
	int c = sqrt(pow((x[2].fi - x[1].fi),2) + pow((x[2].se - x[1].se),2));
	
	int p = (a+b+c)/2;
//	cout << a << " " << b << " " << c << endl;
//	cout << "chu vi: " << p*2 << endl << "dien tich " << sqrt(abs(p*(p-a)*(p-b)*(p-c)));
	printf("chu vi: %d \ndien tich: %.f",p*2,sqrt(abs(p*(p-a)*(p-b)*(p-c))));
	return 0;
}


