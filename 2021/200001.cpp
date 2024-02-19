#include <bits/stdc++.h>
using namespace std;
char A[10] = {'B','C','D','B','A','D','C','D','A','B'};
int main(){

	char dapAn;
	int n;
	cin >> n;

	int Kq[n];

	for(int i=0;i<n;i++){
		Kq[i] =0;
		for(int j=0;j<=9;j++){
			cin >> dapAn;
			if(dapAn ==A[j]) Kq[i]++;
		}
		for(int i=0;i<n;i++) 
			cout << Kq[i] << "/10" << endl; 
 
	}
	return 0;
}