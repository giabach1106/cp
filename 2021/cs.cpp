#include <bits/stdc++.h>
using namespace std;
int solve(int a,int n){

	int tong=0,a1,soso=0;
	a1 = a;
	while(a1>=10){
			a1 = a1/10;
			soso = soso+1;
		}
		soso = soso +1;
		tong = soso;
	while(tong >-1){
		if(n<=tong){
			int x =1,y=1;
			for(int i=1;i<=(tong -n);i++)
				x= x*10; 
			y= a/x;
			if(y>=10){
			 y= y%10;   
			}
			return y;
		}
		
	}
		
}
int main(){
freopen("cs.inp","r",stdin);
freopen("cs.out","w",stdout);

	int a,n;
	cin >> a >>n;
	cout << solve(a,n);
	return 0;
}