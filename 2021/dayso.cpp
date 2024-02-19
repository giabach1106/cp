#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("dayso.inp","r",stdin);
	freopen("dayso.out","w",stdout);

	long long n,a[100000001],b[100000001]dem1=0,dem2=0,dem3=0,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		a[i] ==i;
		if(a[i]%3==1) dem1++;
		if(a[i]%3==2) dem2++;
		if(a[i]%3==0) dem3++;

	}
	for(int i=1;i<=n;i++){
		if(a[i] %3==1) a[i] = b[i];
		else if(a[i]%3==2) a[i] = b[i+dem1];
		else if(a[i]%3==0) a[i] = b[i+dem2+dem1];

}   cout << a[m+1];

	return 0;
}
