#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("pretable.inp","r",stdin);
	freopen("pretable.out","w",stdin);
	int n,k;
	cin >> n >> k;
	if(n%k==0) cout<< n/k;
	else
	cout << n/k+1;

	return 0;
}