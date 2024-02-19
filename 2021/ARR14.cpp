#include <bits/stdc++.h>
using namespace std;

int main(){
	long a,b,tong =0;
	cin >> a;
	long i=1;
	do
	{
		b=a%2;
		tong = tong + (i*b);
		a=a/2;
		i=i*10;
	}while(a>0);
	cout << tong << endl;
	cin.get();
	cin.get();

	return 0;
}