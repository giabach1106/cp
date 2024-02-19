#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int Size = 1e6;
bool isPrime[Size + 10];

void Sieve() {
	memset(isPrime, 1, sizeof(isPrime));
	isPrime[0] = isPrime[1] = 0;

	for (int i = 2; i <= sqrt(Size); i++)
		if (isPrime[i])
			for (int j = i * i; j <= Size; j += i)
				isPrime[j] = 0;
}

ll power(int a, int b, int r) {
	if (b == 0)
		return 1 % r;

	ll tmp = power(a, b / 2, r) % r;
	tmp = (tmp * tmp) % r;

	if (b % 2 == 0)
		return tmp;

	return (ll) (tmp * (a % r)) % r;
}

void Solve() {
	for (int i = 3; i <= Size; i++)
		if ((power(2, i, i) == 2 && !isPrime[i]) || (power(2, i, i) != 2 && isPrime[i]))
			cout << i << "\n";
}

int main() {
    freopen("Fermat.out", "w", stdout);

	Sieve();
	Solve();
}
