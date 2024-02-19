#include <bits/stdc++.h>
using namespace std;
const int z = 1e6;
int a[z],n;
int bs(int left,int right, int x){
	while(left<=right){
		int mid = (left+right)/2;
		if(a[mid] == x) return mid +1;
		else if(a[mid] <x) left = mid+1;
		else right = mid-1;
	}return -1;
}
int main(){

	int test,x;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	cin >> test;
	while(test--){
		cin >> x;
		cout << bs(0,n-1,x) << " ";
	}
	return 0;
}