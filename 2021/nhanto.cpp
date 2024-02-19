#include <bits/stdc++.h>
using namespace std;
string nhan(string a,long b){
	int carry,s;
	string c="",tmp;
	for(int i=a.size()-1;i>=0;i--){
		s = int(a[i]-48)*b+carry;
		carry = s/10;
		c = char(s%10+48)+c;

	}if(carry>0) to_string(carry,tmp) else tmp ="";

	return tmp+c;
}
int main(){
	string a;
	long b;

	cin >> a>> b;
	cout << nhan(a,b);

}