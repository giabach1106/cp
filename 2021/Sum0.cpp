#include <bits/stdc++.h>
using namespace std;
const int maxn = 10e5+5;
int A[maxn],s[maxn+1];
void file(){
	freopen("Sum0.INP","r",stdin);
	freopen("Sum0.OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();

	int n,tong=0,dem,max=0;
	cin >> n;
	for(int i=1;i<=n;i++)
		cin >> A[i];
	s[0] = 0;
	for(int i=1;i<=n;i++){
		s[i] = s[i-1] + A[i];
	}
	for(int i= 1;i<n;i++ ){
		for(int j=i+1;j<=n;j++){
			if(s[j] - s[i-1] ==0){
				dem = j-i+1;
			}if(max < dem) max = dem;
		}
	}cout << max;
	return 0;
}