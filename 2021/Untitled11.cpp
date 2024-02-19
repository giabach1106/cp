#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 150000+5 ;
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
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> A[i];
	int sz = n;
	for(int i=0;i<n;i++){
		sort(A,A+n);
		for(int k=n-1;k>=0;k--){
			if(A[k] == A[k-1]){
				A[k-1] = A[k-1] + A[k];
				for(int o=k;o<sz-1;o++)
					A[o] = A[o+1];
				sz--;
			}	
		}				
	}	
	for(int i=0;i<n;i++)
			cout << A[i] << " ";
	return 0;
}


