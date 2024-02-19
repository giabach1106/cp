#include <iostream>
using namespace std;

int main(){
	int n, a[1000];
	cin >> n;
	for(int i=0; i < n ;i++)
		cin >> a[i];

	int k; cin >> k;
	for(int i=k-1;i<k+1;i++){
		a[i]=a[i+1];	
	for(int i=0;i<n;i++)
	cout << a[i]<< " ";
	}


	return 0;
} 