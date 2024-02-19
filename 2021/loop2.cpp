#include <iostream>
using namespace std;

int main(){
	int x,tich = 1;
	while (true){
		cin >> x;
		if (x !=0)
			tich = tich *x;
		if ( x == 0)
			break;}
		cout << tich ;
return 0;
}

