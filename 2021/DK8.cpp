#include<iostream>
using namespace std;


int main(){
	int a,b;
	cin >> a;
	switch(b){
		case 500000:
			if (a > b && a < 1000000 )
				cout << a*98/100;
		break;

		case 1000000:
			if (a >= b && a < 2000000 )
				cout << a*95/100;
		break;

		case 2000000:
			if (a >= b && a < 5000000 )
				cout << a*93/100;
		break;

		case 5000000:
			if (a >= b && a < 10000000 )
				cout << a*92/100;
		break;

		case 10000000:
			if (a >= b )
				cout << a*90/100;
		break;	
		default:
			cout << a;
	
	}
	return 0;
}

