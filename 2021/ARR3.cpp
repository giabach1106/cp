#include <iostream>
using namespace std;

int main(){
	int n,a[1000],tong=0,tbc;
	cin >> n;
	for(int i=0;i<n;i++)
			cin >> a[i];
	for(int i=0;i<n;i++)
			tong = tong + a[i];

tbc= tong /n;

int minv=abs(tbc-a[0]);//abs la gia tri tuyet doi
	for(int i=1;i<n;i++){
		if(abs(tbc-a[i])<minv)
			minv = abs(tbc-a[i]);
	}  int min = tbc - minv;
		cout <<tbc<<endl<< min;
		
}