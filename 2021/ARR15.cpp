#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a[100],dem=0;
	int b[100], x=1;
	b[0]=a[0];
	cin >>n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<x;j++){
			if(a[i]==a[j])
				dem++;
		}
		if(dem==0){
			b[x]=a[i];
			x++
		}
	}
	for( int i=0;i<n;i++)
		cout << dem;
	return 0;
}