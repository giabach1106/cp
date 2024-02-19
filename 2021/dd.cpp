#include <bits/stdc++.h>
using namespace std;
int main(){
freopen("dd.inp","r",stdin);
freopen("dd.out","w",stdout);
	int kq=0;
	int n,d;
	cin >> n >> d;
	for(int i=0;i<n;i++){
		char a; int b;
		cin >> a>> b;
		kq = kq +b;
	}cout << kq;
	return 0;
}