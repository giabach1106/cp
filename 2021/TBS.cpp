#include <bits/stdc++.h>
#define ll long long

using namespace std;
double A[4];
void file(){
	freopen("TBS.INP","r",stdin);
	freopen("TBS.OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	int dem1=0,dem2=0,dem3=0;
	for(int i=0;i<4;i++)
		cin >> A[i];
	for(int i=0;i<4;i++){
		if(A[i] == 0.0){
			cout << 0;
			return 0;
		}
		if(A[i] < 0)
			dem1++;
	}if(dem1 == 0)
		cout << 1;
	else{
		if(dem1 % 2 == 1)
			cout << -1;
		else cout << 1;
	}
	
	return 0;
}


