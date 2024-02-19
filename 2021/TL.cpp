#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n,m;
void file(){
	freopen("LT.INP","r",stdin);
	freopen("LT.OUT","w",stdout);
}
string tostring(long long n){
  stringstream ss;
  ss << n;
  string s = ss.str();
  return s;
}
string check(string a, string b){
	while (a.size() < b.size()) a = '0' + a;
  	while (b.size() < a.size()) b = '0' + b;
    int nho = 0;
  	string ans = "";
  	for (long long i = a.size() - 1; i >= 0; i--){
    	int chuso = (a[i] - '0') + (b[i] - '0') + nho;
    	nho = chuso / 10;
    	char k = char((chuso % 10) + 48);
    	ans = k + ans;
  	}
  	if (nho >= 1) ans = '1' + ans;
  	return ans;
}
string nhan(string a,int b){
	string ans = "";
  	int nho = 0;
  	for (long long i = a.size() - 1; i >= 0; i--){
    	int chuso = (a[i] - '0') * b + nho;
    	nho = chuso / 10;
    	ans = char((chuso % 10) + 48) + ans;
 	 }
  	if (nho > 0) ans = tostring(nho) + ans;
  	if (b == 0 || a == "0") ans = "0";
  	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n >> m;
	string s1="1",s2="1";	
	for(int i=1;i<=n;i++)
		s1 = nhan(s1,2);
	for(int i=1;i<=m;i++)	
		s2 = nhan(s2,3);
	string s = check(s1,s2);
	cout << s[0];
	return 0;
}


