#include <bits/stdc++.h> // chuyen tu bat ki ->10
using namespace std;
int check(char n){
	if(n>='0' && n <='9')
		return int(n) - '0';
	else return int(n) - 'A'+10; 
}
int main(){
	string s;
	int n,i;
	cin >> s >> n;
	long long sol = 0, mu = 1;
	for(i= s.size()-1;i>=0;i--){
		sol = sol + check(i)*mu;
		mu = mu * n;
	}cout << sol;
	return 0;
}
