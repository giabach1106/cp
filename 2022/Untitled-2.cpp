#include <bits/stdc++.h>
typedef unsigned long long ull; 

using namespace std;
const int maxn = 10e5+5 ;
char A[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
ull n;
void file(){
	freopen("DKT.INP","r",stdin);
	freopen("DKT.OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n;
	ull a = (n+1)*n/2;
	a = a%26;
	cout << A[a];
	
	return 0;
}