#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 10e5+5 ;
int A[maxn];
ll n;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	int n = 1;
	while(n < 11){
		cout << n << " tiep theo" << endl;
		n++;
		if(n == 10){
			cout << n;
			break;
		}
	}
	
	return 0;
}


