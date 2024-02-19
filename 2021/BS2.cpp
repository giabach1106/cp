#include <bits/stdc++.h>
using namespace std;
const int z = 1e6;
int a[z],n;
int bs(int left,int right, int x){
	while(left<=right){
		if(x == a[1]) return 1;
		int mid = (left+right)/2;
		if(a[mid] == x && a[mid-1] < x) return mid ;
		else if(x < a[mid]) right  = mid-1;
		else left= mid +1;
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
		cout << bs(1,n,x) << " ";
	}
	return 0;
}