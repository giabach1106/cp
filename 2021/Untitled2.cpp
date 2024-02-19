#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 1010 ;
int A[maxn],F[maxn];
ll n;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n;
	for(int i=1;i<=n;i++)
		cin >> A[i];
	F[0] = 1;
	if(A[1] == 2) F[1] = 0;
	else F[1] = 1;
	if(A[2] == 2) F[2] =0;
	else {
		if(A[2] == 1) F[2] = F[1];
		else if(A[2] ==0 ) F[2] = 2;
	}

	for(int i=3;i<=n;i++){
		if(A[i] == 2) F[i] = 0;
		else if(A[i] == 1) F[i] = F[i-1];
		else {
			if(A[i-3] == 1) F[i] = F[i-1]+F[i-2];
			else if(A[i-3] == 0) F[i] = F[i-1] +F[i-2]+ F[i-3];
		}
	}
	cout << F[n];
	return 0;
}
