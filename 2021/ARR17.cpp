#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a[100],max,vtri;
	cin >>n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n;i++){
		max = a[0];
		if(max<a[i]){
			max=a[i];
			vtri=i; 
		}
	}
	for(int i=0;i<n;i++)
		swapp (a[0], a[vtri]);
	for(int i=0;i<n;i++)
		cout << a[i];
	return 0;
}