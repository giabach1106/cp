#include <bits/stdc++.h>
using namespace std;
int main(){
freopen("ant.inp","r",stdin);
freopen("ant.out","w",stdout);
	int n1,n2,t;
	cin >> n1 >> n2;
	string a,b,c="",d;
	cin >> a>> b >> t;
	c = a+b;
	for(int i=0;i<=c.size()-1;i++){
		d[(i+t)%c.size()] = c[i];
	}
	for(int i=n1-1;i>=0;i--){
		cout <<d[i];
	}


	for(int i=n1;i<=c.size()-1;i++){
	    cout << d[i];
	}

	return 0;
}