#include <bits/stdc++.h>
using namespace std;

string a, b;
int d[300];

int main(){
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++) d[a[i]+0]++;
	for (int i = 0; i < b.size(); i++) d[b[i]+0]--;
	
	bool flag = 1;
	for (int i = 0; i < 300; i++)
		if (d[i] != 0){
			flag = 0;
			break;
		}
	
	if (flag) cout << "YES";
	else cout << "NO";
	
	return 0;
}


