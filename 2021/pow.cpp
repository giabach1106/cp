#include <bits/stdc++.h>
#define ll_ long long
using namespace std;
ll_ a, b, k;

ll_ power(ll_ a, ll_ b) {
	if (b == 0)
		return 1;
		
	ll_ tmp = power(a, b / 2) % k;
	tmp *= tmp; // tmp = a mũ (b / 2) * (a mũ (b / 2))
	
	if (b % 2 == 0)
		return tmp % k;
	else
		return ((tmp % k) * (a % k)) % k; // Giá trị trả ra được suy ra từ biểu thức (tmp * a) % k
	//Quy tắc mod cho phép nhân: (a * b) % k = (a % k * (b % k)) % k;
}

int main() {
	cin >> a >> b >> k; // a là cơ số, b là số mũ, k là số chia.
	cout << power(a, b);
}
