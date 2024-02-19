#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a[100];
	cin >>n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	int x,dem=0;
	cin >> x;
	for(int i=0;i<n;i++){
		if(a[i]==x)
			dem++;
	}
	cout << dem;
	return 0;
}