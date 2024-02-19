#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 10e5+5 ;
int A[maxn];
ll n,k;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n;
	k = n/3;
	ll resa=0,resb=0,ab=n;
	for(int i=1;i<=k;i++)
		resa = resa + n-3*i+1;
	for(int i=1;i<=k;i++)
		resb = resb +3*i;
	ab =  n+3;
	do{	
		ab = ab - k;
	}while(k--);
	cout <<  resa+ resb -ab;
	return 0;
}


