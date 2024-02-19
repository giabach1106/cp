#include <bits/stdc++.h>
using namespace std;

long long a, b, c, x, y, z, res;

int main(){
	cin >> a >> b >> c;
	x = max(a, max(b, c));
	z = min(a, min(b, c));
	y = a + b + c - x - z;
	
	res = max(x * y * z, max(x * y + z, x + y + z));
	cout << res;
	return 0;
}


