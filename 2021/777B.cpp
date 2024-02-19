#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
using namespace std;
const int maxn = 110;
char A[maxn][maxn];
ll n,m,k,t,res= 0,a,b,c,x,y,z,tmp;
bool check;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
void Print(bool dem){
	if(dem == 1)
		cout <<"YES" << endl;
	else cout << "NO" << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> t;
	while(t--){
		cin >> n >> m; check =1;
		for(ll i = 1;i<=n;i++){
			for(ll j = 1;j<=m;j++){
				cin >> A[i][j];
			}
		}
		for(ll i =1;i<=n-1;i++){
			for(ll j = 1;j<=m-1;j++){
				tmp = A[i][j] + A[i+1][j+1] + A[i][j+1] + A[i+1][j] - 192;
				if(tmp == 3){
					check = 0;
					break;
				}
			}
		}
		Print(check);
	}
  return 0;
}
// cout<<setprecision(3)<<fixed<<
/*
#
#                       _oo0oo_
#                      o8888888o
#                      88" . "88
#                      (| -_- |)
#                      0\  =  /0
#                    ___/`---'\___
#                  .' \\|     |# '.
#                 / \\|||  :  |||# \
#                / _||||| -:- |||||- \
#               |   | \\\  -  #/ |   |
#               | \_|  ''\---/''  |_/ |
#               \  .-\__  '-'  ___/-. /
#             ___'. .'  /--.--\  `. .'___
#          ."" '<  `.___\_<|>_/___.' >' "".
#         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
#         \  \ `_.   \_ __\ /__ _/   .-` /  /
#     =====`-.____`.___ \_____/___.-`___.-'=====
#                       `=---='
#
#
#     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/