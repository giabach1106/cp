#include <bits/stdc++.h> // chuyen tu 10 -> bat ki
using namespace std;
const char cs[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int sol(int A, int n){
	string a="";

	while(A>0){
		a = a + cs[A%n];
		A = A/n;
	}for(int i=a.size()-1;i>=0;i--)
	    cout << a[i];
}

int main(){
	int A,n;
	cin >> A >> n;
	 sol(A,n);
	return 0;
}

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
