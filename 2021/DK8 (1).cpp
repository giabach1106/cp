#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a,b;
	cin >> a;

	b= sqrt(a);
	if(b*b==a)
		cout  << "YES";
	else
		cout << "NO"; 
	return 0;
}