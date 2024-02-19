#include <iostream>
using namespace std;
int main(){
	int n,tong =0,tach;
	cin >> n;
	for(;n!=0;)
	{
		tach= n%10;
		tong = tong +tach;
		n/=10//chia lay nguyen
	}cout << tong;

	return 0;
}