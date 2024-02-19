#include<iostream>
#include<math.h>
using namespace std;
	main(){
		unsigned int a, b, c ;
		float S, P; 
		cin >> a >> b >> c;
		P = (a+b+c)/2;
		S= sqrt(P*(P-a)*(P-b)*(P-c));
		cout << "Dien tich tam giac do la " << S;
		return 0;

	}