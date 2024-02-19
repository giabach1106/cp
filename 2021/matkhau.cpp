#include <bits/stdc++.h>
#define ll long long;
using namespace std;
//const int maxn = 10e5+5;
string s;
int A[maxn];
void file(){
	freopen("mapkhau.INP","r",stdin);
	freopen("matkhau.OUT","w",stdout);
}
void nhap(){
	cin >> s;
}

bool check1(string s){
	if(s.size()>=6)
		return 1;
	else return 0;
}
bool check2(string s){
	int dem=0;
	for(int i=0;i<s.size();i++)
		if(s[i] >= 'a'&&s[i] <='z')
			dem++;
	if(dem>=1) return 1;
	else return 0;
}
bool check3(string s){
	int dem=0;
	for(int i=0;i<s.size();i++)
		if(s[i] >= 'A'&&s[i] <='Z')
			dem++;
	if(dem>=1) return 1;
	else return 0;
}
bool check4(string s){
	int dem=0;
	for(int i=0;i<s.size();i++)
		if(s[i] >= '1'&&s[i] <='9')
			dem++;
	if(dem>=1) return 1;
	else return 0;
}
bool check5(string s){
	int dem=0;
	for(int i=0;i<s.size();i++)
		if(s[i] < 'A' && s[i] >'Z' && s[i] <'a' && s[i] >'z' && s[i] <'1' && s[i] >'9')
			dem++;
	if(dem>=1) return 1;
	else return 0;
}
bool solution(string s){
	if(check1(s)&&check2(s)&&check3(s)&&check4(s)&&check5(s))
		return 1;
	else return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	file();
	nhap();
	if(solution(s)) cout << "YES";
	else cout << "NO";
	return 0;
}