#include <iostream>
using namespace std;

int main(){
	int n,a[10000],kiemtra=0;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];

	for(int i=0;i<n;i++){
		if(a[i]==a[n-1-i])
	        kiemtra++;
	}
	if(kiemtra > 0)
	    cout << "YES";
	else cout << "NO";
	    
	return 0;
}