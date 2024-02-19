#include <iostream>
using namespace std;
	int uoc(int a, int b){
	if(a==0|| b==0)
		return a+b;
	while(a*b!=0){
		if(a>b)
			a=a%b;
	else b=b%a;
      }
	return a+b;}
	
	int boi(int a,int b){
		int re=uoc(a,b);
		return a*b/re;
	}

int main(){
    int a,b;
	cin >> a>>b;
	int re=uoc(a,b);
		cout << re<<endl;
	re=boi(a,b);
		cout<< re<< endl;
	return 0;
}

