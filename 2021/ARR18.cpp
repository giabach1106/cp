#include <bits/stdc++.h>
using namespace std;
void doicho(int &x; int &y){
	int tmp=x;
	x=y;
	y=tmp;
}
int main(){
	int n,a[100];
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];

	for ( int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]<a[j])
				doicho(a[i],a[j]);
		}
	}
	for(int i=0;i<n;i++)
		cout << a[i]<< " ";

	return 0;
}