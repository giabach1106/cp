#include <bits/stdc++.h>
#define ll long long 

using namespace std;
const int maxn = 20;
int A[maxn];
int n, tong=0;
string s;
vector <char> v;

void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
void solve(int x){
	if(x == s.size()){
		for(int i = 0;i<s.size();i++)
			tong += int(s[i]-'0')*A[i];
		if(tong == n){
			for(int i=0;i<v.size();i++)
				cout << v[i] << s[i];
			cout << endl;
		}
		else{
			for(int i = 0;i<=1;i++){
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
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n >> s;
	solve(0);
}

