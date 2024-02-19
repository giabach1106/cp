#include <bits/stdc++.h>
using namespace std;
int check(int n){
		int tong=0,A1=0;
		
	for(int i=1;i<=n;i++){
	    int sochuso=0;
		A1 =i;
		while(A1>=10){
			A1 = A1/10;
			sochuso =sochuso +1;
		}sochuso = sochuso +1;
		tong = tong +sochuso;
	}
	int x = tong;
	int x1 = 0;
	while(x>1){
	    if(x1%2==0) x = x / 2;
		else x = x/2 + x%2;
		x1++;
	}

	int y=1;
	for(int i=x1;i>=1;i--){
		if(i%2==0) y= y*2;
		else y = y*2-1;
	}
	
	
	tong = 0;
	for(int i=1;i<=n;i++){
		A1 =i;
		while(A1>=10){
			A1 = A1/10;
			tong = tong +1;
		}
		tong = tong +1;
		if(y<=tong){
        for(int j = 1; j<=tong-A1;j++){
         A1 = A1/10;
        }
        if(tong>=10) A1 = A1%10;
        else A1 = tong;
        return A1;
		}
	}
    
}
int main(){
freopen("tgs.inp","r",stdin);
freopen("tgs.out","w",stdout);
ios_base::sync_with_stdio(false);
cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	cout << check(n);
		
	return 0;
}

