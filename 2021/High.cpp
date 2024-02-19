#include <bits/stdc++.h>
using namespace std;

string s;
int b, N;

string solve(){
	string save0 = "";
	if (s == "0") return "0";
	while (s[s.size()-1] == '0'){ // dem xem co bn so 0 o cuoi va xoa di
		save0 = save0 + "0";
		s.erase(s.size()-1, 1);
	}
	int i = s.size() - 2;
	while (i >= 0 && s[i] == char(b-1+48)) i--; // tim vi tri tang
	if (i == -1) return "0";
	
	s[i] = char(s[i] + 1); // tang vi tri i len 1

	string res = "";
	for (int j = 0; j <= i; j++) res = res + s[j]; // res[0..i] dung roi
	res = res + save0; // them 0 vao
	
	res = res + char(s[s.size()-1]-1);
	for (int j = i+1; j < s.size()-1; j++) res = res + s[j];
	
	return res;	
}

int main(){
	cin >> b >> N;
	//cin.ignore();
	cin >> s;
	cout << solve();
	return 0;
}

