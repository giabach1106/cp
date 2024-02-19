#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a[100];
	cin >>n;
	for (int i=0;i< n;i++)
		cin >> a[i];
	for ( int i=0;i<n;i++){
		if(a[i]%2==0&&a[i+1]%2==0)
			a[i]=a[i+1]+a[i];

		cout << a[i]<< " ";
	}		
	return 0;
}