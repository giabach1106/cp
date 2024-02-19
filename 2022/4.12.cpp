#include <bits/stdc++.h>
#define ll long long 

using namespace std;
const int maxn = 20;
int A[maxn];
int n, tong=0;
string s;
vector <char> v;
ll cnt = 0;
void file(){
	freopen("4_12.INP","r",stdin);
	freopen("4_12.OUT","w",stdout);
}
void solve(int x){
	
	if(x == s.size()) {
		tong = 0;
		for(int i = 0;i<s.size();i++)
			tong += int(s[i]-'0')*A[i];
		if(tong == n){
			cnt++;
		}
	}
	else {
		for(int i = -1;i<=1;i+=2){
			A[x] = i;
			if(i==1) 
				v.push_back('+');
			else 
				v.push_back('-');
			solve(x+1);
			v.pop_back();
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n >> s;
	solve(1);
	cout << cnt << endl;
}