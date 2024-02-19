#include <bits/stdc++.h>
using namespace std;
long long check1(long long  a,long long b){
	long long  x = b-a;
	if(x%2==1) return x;
     return x-1;
}
long long check2(long long a, long long b){
long long y = a-b;
	if(y%2==0) return y;
	 return y+1;

}
int main(){
	freopen("ab.inp","r",stdin);
    freopen("ab.out","w",stdout);

    int dem=0;
	long long a,b;
	cin >> a>> b;
	while(a!=b){
		if(a>b){
			a = a - check2(a,b);
			dem++;
		}
		else{
			a = a+check1(a,b);
			dem++;
		} 
	}cout << dem;
	return 0;
}
