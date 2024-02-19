#include<bits/stdc++.h>
using namespace std;
int main(){
	double p,q;
	cin >> p>>q;
	float a,b;
	a = ceil(p);
	b = floor(q);

	cout << (b+1)*b/2-(a-1)*a/2;
	return 0;
}