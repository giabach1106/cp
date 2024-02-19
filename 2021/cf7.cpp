#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 10e5+5 ;
int A[maxn];
ll n;

void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	string a,b,s;
	int dem = 0;
	cin >> a>> b;
	for(int i = a.size()-1;i>=1;i--){
		s[dem] = a[i];
		dem++; 
	}cout  << s;
	return 0;
}


