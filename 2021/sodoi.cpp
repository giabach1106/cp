#include <bits/stdc++.h>
using namespace std;
int main(){
freopen("sodoi.inp","r",stdin);
freopen("sodoi.out","w",stdout);
	int n,x=1;
	cin >> n;
	int a[10000001],b[10000001];

	for(int i=0;i<n;i++)
		cin >> a[i];
	b[0] = a[0];
	for(int i=1;i<n;i++){
		int dem=0;
		for(int j=0;j<x;j++){
			if(a[i] +b[j]==0)
				dem++;
		}if(dem!=0){
			b[x] = a[i];
			x++;
		}
	}cout << dem;
	return 0;
}