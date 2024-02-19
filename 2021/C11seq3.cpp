#include <bits/stdc++.h>
#define ll long long;
using namespace std;
const int maxn = 10e5+5;
int A[maxn]; bool nt[maxn];
int q;
void file(){
	freopen("DemNt.INP","r",stdin);
	freopen("DemNt.OUT","w",stdout);
}
void nhap(){
	cin >> q;
	while(q--){
		int l,r;
		cin >> l >> r;

	}
}
void sangNT(){
    for(ll i = 1;i<=N;i++) check[i] = i;
    for(ll i = 2;i*i<=N;i++){
        if(check[i] == i){
            for(ll j = i*i;j<=N;j+=i){
                if(check[j] == j) check[j] = i;
            }
        }
    }
}
void solution(){

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	file();
	nhap();
	solution();
	

	return 0;
}