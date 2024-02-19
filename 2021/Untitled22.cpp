#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 10e5+5 ;
int A[maxn];
ll a,b,c,m;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> a >> b >> c >>m;
	cout << max(a*b%m, max(a*c%m,b*c%m));
	
	return 0;
}


