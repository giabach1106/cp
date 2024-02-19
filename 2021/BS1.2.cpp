#include <bits/stdc++.h>
using namespace std;
const int z = 1e6;
int a[z],n;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int test,x;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	cin >> test;
	while(test--){
		cin >> x;
		cout << upper_bound(a, a + n, x) - a << " ";
	}

	return 0;

}