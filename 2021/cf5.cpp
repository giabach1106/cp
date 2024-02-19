#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 10e5+5 ;
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
	//cin >> n;
	string s;
	cin >> s;
	ll dem = 1;
	for(int i=1;i<s.size();i++){
		if(s[i] == s[i-1])
			dem++;
		else dem = 1;
		if(dem == 7){
			cout << "YES";
			return 0;
		}
	}cout << "NO";
	return 0;
}


