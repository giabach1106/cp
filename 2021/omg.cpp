#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,p;
	cin >> a >> b >> c;
	p = (a+b+c)/2;
	cout << setprecision(2) << fixed << sqrt(p*(p-a)*(p-b)*(p-c));
	
	return 0;
}
