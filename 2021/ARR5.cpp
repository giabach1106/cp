#include <iostream>
using namespace std;

int main(){
	int n, a[1000],kcln=0;
	cin >> n;
	
	for(int i =0;i<n; i++)
		cin >> a[i];

	for(int i=0;i<n;i++)
		if((a[i+1]-a[i])>kcln)
			kcln = ((a[i+1]-a[i]));
		cout << kcln;
	return 0;
}