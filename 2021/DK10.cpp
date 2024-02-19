#include <iostream>
#include <math.h>

using namespace std;
int main(){
	float a,b,x ;
	cin >> a >>b; 
	if( a < b)
		x = (a+b)/2;
	else if ( a ==b)
		x = a;
	else x= a*a+b*b;

	cout << a*x*x+b*x+5;
	return 0;
}