#include<bits/stdc++.h>

using namespace std;
int main(){
	float a, b, c, delta;
	cin >> a >> b>> c;
	delta = b*b-4*a*c;
	if(delta < 0)
		cout << "vo nghiem";
	else
		if(delta == 0)
		cout << "x1 = x2 = " << (-b)/(2*a);
		else{
			delta = sqrt(delta);

			cout << "x1 = " << (-b + sqrt(delta))/ (2*a) << endl <<"x2 = " << (-b-sqrt(delta))/ (2*a);
		}


	return 0;
}