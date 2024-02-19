#include <iostream>
using namespace std;

int main(){
	float x,y;
	cin >> x;
	if(x < 50)
		y = x*2000;
	if(x >=50 && x <= 100)
		y = 49*2000+(x-49)*3500;
	if (x > 100)
		y = 49*2000+51*3000+ (x-100)*5500;
	cout << y;

	return 0;
}