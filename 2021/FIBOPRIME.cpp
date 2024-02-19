#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
	if(n<0) return -1;
	else if(n==0||n==1) return n;
	else return fibonacci(n-1) +fibonacci(n-2);
}
int songuyento(int n){
	if(n<2) return 0;
	int i, j =sqrt(n);
	for(int i=2;i<= j;i++)
	{
		if(n%i==0){
			return 0;
		}
	}return 1;
}
int main(){
	int n,dem=0,i=0;
	cin >> n;
	while(fibonacci(i)<n){
		int fi = fibonacci(i);
		if(songuyento(fi)){
			dem++;
		}
	}i++;
	cout << dem;
	

	return 0;
}