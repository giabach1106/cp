#include <bits/stdc++.h>
using namespace std;
int check(double A, double n){
		int tong=0,A1=0;
		
	while(tong>-1){
	    int sochuso=0;
		A1 =A;
		while(A1>=10){
			A1 = A1/10;
			sochuso =sochuso +1;
		}
		sochuso = sochuso +1;
		tong = tong +sochuso;
		if(n<=tong){
			int x =1,y=1;
			for(int i=1;i<=(tong -n);i++)
				x= x*10; //dvi cua n
			y= A/x;
			if(y>=10){
			 y= y%10;   
			}
			return y;
		}
		A = A +2;
	}

}
int main(){
freopen("finddigit.inp","r",stdin);
freopen("finddigit.out","w",stdout);


	double A,n;
	cin >> A;
	cin >> n;
	cout << check(A,n);
	return 0;
}

