
#include <bits/stdc++.h>
using namespace std;
int test;
pair <int,int> A[100];
void file(){
	freopen("baitap.INP","r",stdin);
	freopen("baitap.OUT","w",stdout);
}
void nhap(){
	cin >> test;
	while(test--){
		int n,m,kq=0;
		cin >> n >> m;
		for(int i=0;i<n;i++){
			cin >> A[i].first >> A[i].second;
		}sort(A,A+n);
		for(int i=0;i<n;i++){
			if(m>A[i].first){
				kq++;
				m=m+A[i].second;
			}else break;
		} cout << kq << endl;

		
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	file();
	nhap();
	
	return 0;
}
