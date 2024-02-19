#include <bits/stdc++.h>
using namespace std;
int solve(int n){
	long long dem;
	for(int i=2;i<=sqrt(n);i++){
		dem = 0;
		while(n % i == 0){
            ++dem;
            n /= i;
        }
        if(dem){
        	
        }
	}	
}
int main(){
	int n;
	cin >> n;
	cout << solve(n);
	return 0;
}