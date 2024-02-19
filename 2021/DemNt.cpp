#include <bits/stdc++.h>
using namespace std;
const int Size = 1e5;
bool isPrime[Size + 10];
int t, L, R, F[Size + 10];

void FastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
}

void File() {
	freopen("DemNT.inp", "r", stdin);	
	freopen("DemNT.out", "w", stdout);
}

void Sieve() {
	memset(isPrime, 1, sizeof(isPrime));
	isPrime[0] = isPrime[1] = 0;
	
	for (int i = 2; i <= sqrt(Size); i++)
		if (isPrime[i])
			for (int j = i * i; j <= Size; j += i)
				isPrime[j] = 0;
}

void CntArr() {
	//F[i] là số lượng số nguyên tố từ 1 đến i
	
	F[0] = 0;
	
	for (int i = 1; i <= Size; i++) {
		F[i] = F[i - 1];
		if (isPrime[i])
			F[i]++;
	}
}

void Tests() {
	while (t--) {
		cin >> L >> R;
		cout << F[R] - F[L - 1] << "\n";
	}
}

int main() {
	FastIO();
	//File();
	
	Sieve();
	CntArr();
//	cin >> t;
//	Tests();
cout << "i" << " " << "F[i]" << "\n";
	for (int i = 1; i <= 10; i++)
		cout << i << " " << F[i] << "\n";
}