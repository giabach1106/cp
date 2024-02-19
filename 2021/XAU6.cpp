#include <bits/stdc++.h>
using namespace std;

int main(){
	string c,d;
	cin >>c>>d;
	int a[256],b[256];

	for(int i=0;i<c;i++)
		a[i]++;
	for(int i=0;i<d;i++)
		b[i]++;
	for(int i=1;i<255;i++)
		if(a[i]==b[i]){
			cout << "YES";
		else cout << "NO";
	}
	return 0;
}