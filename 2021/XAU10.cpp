#include <bits/stdc++.h>
using namespace std;

string s;

bool solve(){
	int sum = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == '(') sum++;
		else sum--;
		if (sum < 0) return 0;
	}
	return (sum == 0);
		
}

int main(){
	cin >> s;
	if (solve()) cout << "YES";
	else cout << "NO";
	return 0;
}


