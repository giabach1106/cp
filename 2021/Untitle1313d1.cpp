#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 1e9+10 ;
int A[maxn];
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
ll a1,b1,c1,d1;
ll a2,b2,c2,d2;
int check(){
	if(a1 - b1 + c1 -d1 == 0 &&  a2 - b2 + c2 - d2 ==0)
		return 1;
	else return 0;
}
void nhap(){
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 >>d1 >> d2;	
}
int solution(){
	if(check){
		if(a1 == b1)
			cout << (a2-b2)*(a2-b2);
		else cout << (a2 - c2)*(a2-c2);
		return 0;
	}
	return -1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	//file();
	nhap();
	solution();
	
	return 0;
}
//cout<<setprecision(3)<<fixed<<
