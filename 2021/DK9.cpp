#include <iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	if (a < 500) cout<< a;
	if(a >= 500000 && a < 1000000) cout << a*98/100;
	if(a >= 1000000 && a < 2000000) cout << a*95/100;
	if(a >= 2000000 && a < 5000000) cout << a*93/100;
	if( a >= 5000000 && a < 10000000) cout << a*92/100;
	if( a >= 10000000) cout << a*90/100;

	return 0;
}