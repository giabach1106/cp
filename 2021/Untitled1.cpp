#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 10e5+5 ;
string A[maxn];
ll n;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	string s;
	int dem=0;
	cin >> s;
	sort(char(s), char(s+s.size()));
	for(int i=0;i<s.size();i++)
		if(s[i]!= s[i+1])
			dem++;
	cout << dem;
	return 0;
}














