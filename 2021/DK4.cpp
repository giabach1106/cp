#include<iostream>
using namespace std;
int main(){
	float a, b,c;
	cin >> a >> b >> c;
	if(a >= b+c || b>= a+c || c>= a+ b)
		cout << "KHONG";
	else cout << "CO";
	return 0;
}