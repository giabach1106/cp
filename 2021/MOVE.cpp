#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a[100] , b[100],k;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	cin >> k;
	for(int i=0;i<=n-1;i++)
		b[(i+k)%n] = a[i];
	for(int i=0;i<=n-1;i++)
		cout << b[i]<< " ";
	
	return 0;
}