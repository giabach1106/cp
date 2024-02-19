#include <bits/stdc++.h>
#define __str string
using namespace std;
__str n, res, tmp;
bool Ck;

void FastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
}

void File() {
	freopen("esdigit.inp", "r", stdin);	
	freopen("esdigit.out", "w", stdout);
}

void Swap(int i, int j) {
	char tmpC = tmp[i];
	tmp[i] = tmp[j];
	tmp[j] = tmpC;	
}

void Solve() {
	Ck = 0; 
	//Ck = 0 nghĩa là chưa tìm được số nào thỏa mãn, Ck = 1 thì ngược lại
	res = "";
	tmp = "";
	
	for (int i = n.size() - 1; i > 0; i--)
		if (n[i] < '9') {
			int d = -1;
			for (int j = i - 1; j >= 0; j--)
				if ((j > 0 && n[j] > '0') || (j == 0 && n[j] > '1')) {
				//Xét thiếu TH chữ số đầu tiên = 1 -> Không giảm được
					d = j;
					break;
				}
		
			if (d >= 0) {
				tmp = n;
				tmp[i] = tmp[i] + 1;
				tmp[d] = tmp[d] - 1;
				sort(tmp.begin() + d + 1, tmp.end(), greater<char>());
				
				if (!Ck) {
					Ck = 1;
					res = tmp;
				}
				else
					res = max(res, tmp);
			}
		}
}

void PrintRes() {
	if (!Ck)
		cout << 0;
	else
		cout << res;	
}

int main() {
	FastIO();
	//File();
	
	cin >> n;
	Solve();
	PrintRes();
}