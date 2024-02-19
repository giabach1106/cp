#include <bits/stdc++.h>
using namespace std;
int main(){
	int k;
	string a,b;
	cin >> a >> k;
	for(int i=0;i<=a.size()-1;i++){
		b[(i+k)%a.size()] = a[i];
	}for(int i=0;i<=a.size()-1;i++){
	    cout << b[i];
	}
	return 0;
}