#include <bits/stdc++.h>
#define ll long long

using namespace std;
//const int maxn = 10e5+5 ;
//int A[maxn];
ll t;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> t;
	while(t--){
		string A;
		cin >> A;
		if(A.size() == 1) A[0] = A[0] *A[0];
		while(A.size() != 1){
			while
		}
		if(A[0] == 1)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}
/*
for(int i=0;i<A.size();i++){
				if(A[i] == 1 || A[i] == 9)
					A[i] = 1;
				else if(A[i] == 2 || A[i] == 8)
					A[i] = 4;
				else if(A[i] == 3 || A[i] == 7)
					A[i] = 9;
				else if(A[i] == 4 || A[i] ==  6)
					A[i] = 6;
				else A[i] = 5;
			}
*/

