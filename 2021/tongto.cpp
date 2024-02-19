#include <bits/stdc++.h>
using namespace std;
string check(string a, string b){		// 1234
	string c="";					//	  + 859
	int tong=0,nho=0;			//	-------------
					//					   2093			
	while(a.size() > b.size()) b="0"+b;
	while(a.size() < b.size()) a="0"+a;

	for(int i=a.size()-1;i>=0;i--){
		tong = (a[i] -'0') +(b[i]-'0') + nho;
		nho = tong/10;
		c= char(tong%10+48) +c;
	}if(nho>0) c = "1"+c;
	return c;
}
int main(){
	string a,b;
	cin >> a>> b;
	cout << check(a,b);
	return 0;
}
