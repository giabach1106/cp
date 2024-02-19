#include <iostream>
using namespace std;

int main(){
	int n,a[1000];
	cin >> n;
	for(int i=0;i< n;i++)
		cin >> a[i];

	int v,k;
	cin >> v>> k;
	for(int i=n;i>=k;i--)
		a[i]=a[i-1];
		a[k-1]=v;
		n++;
	for(int i=0;i<n;i++)
		cout << a[i]<< " ";

	return 0;
}