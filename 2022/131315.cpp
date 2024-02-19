#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second

using namespace std;
const int maxn = 1e5 + 10;
int A[maxn];
ll n,m,k,t;
string a,b,c,d,e,s = "";
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
int mauthan(){
	return 1;
}
int doi(){
	
}
int thu(){
	
}
int sam(){
	
}
int sanh(){
	
}
int thung(){
	
}
int culu(){
	
}
int tuquy(){
	
}
int thungphasanh(){
	
}
void solve(){
	if(mauthan()){
		if(doi()){
			if(thu()){
				if(sam()){
					if(sanh()){
						if(thung()){
							if(culu()){
								if(tuquy()){
									if(thungphasanh()){
										cout << "Thung pha sanh" << endl;
										return;
									}
								cout << "Tu quy" << endl;
								return;
								}
							cout << "Cu lu" << endl;
							return;
							}
						cout << "Thung" << endl;
						return;
						}
					cout << "Sanh" << endl;
					return;
					}
				cout << "Sam" << endl;
				return;
				}
			cout << "Thu" << endl;
			return;
			}
		cout << "Doi" << endl;
		return;
		}
	cout << "Mau than" << endl;
	return;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> t;
	while(t--){
		ll dem= 0;
		while(dem!=4){
			cin >> a;
			s = s+a;
			dem++;
		}
		solve();
		s = "";
	}
  return 0;
}
// cout<<setprecision(3)<<fixed<<