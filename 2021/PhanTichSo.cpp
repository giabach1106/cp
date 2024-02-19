#include <bits/stdc++.h>
using namespace std;
int main(){
	float thuong;
	int p,q,n,b=0,a;
	cin >> p >> q>> n;
	cout << __gcd(p,q) << endl;
	for(int i=p+1;i<q;i++){
		for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
               goto label; 
            }
		}b++;
		label:
		a=0;
	}cout << b+1 <<endl;




	return 0;
}