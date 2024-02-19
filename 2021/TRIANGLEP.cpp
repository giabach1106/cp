#include <bits/stdc++.h>
using namespace std;
int pascal(int k, int n){
	if(k==0||k==n) return 1;
	if(k==1) return n;
	return pascal(k-1,n-1) + pascal(k,n-1);
}

int main(){
	int n;
	cin >> n;
	int a = n+1;
	for(int i=0;i<a;i++){
		for(int j=0;j<=i;j++){
			cout << pascal(j,i) << " ";
		}cout << endl;
	}
	return 0;
}

