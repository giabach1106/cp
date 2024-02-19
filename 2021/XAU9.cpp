#include <bits/stdc++.h>
using namespace std;

string s;

bool is_digit(char c){
	if (c >= '0' && c <= '9') return 1;
	return 0;
}

int main(){
	cin >> s;
	int i = 0, num, res = 0, j;
	while (i < s.size()){
		if (is_digit(s[i])){
			num = s[i] - 48;
			j = i + 1;
			while (j < s.size() && is_digit((s[j]))){
				num = num * 10 + s[j] - 48;
				j++;
			}
			i = j;	
			res += num;		
		} else i++;
	}
	cout << res;
	return 0;
}


