#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,dem=0;
	cin >> n;
	for(int i=0;i*i<=n;i++)
		if(i*i==n)
			dem++;
	if(dem !=0)
		cout << "YES";
	else cout << "NO";
	return 0;
}