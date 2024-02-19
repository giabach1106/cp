#include <bits/stdc++.h>
using namespace std;
const int maxn = 200005;
int n;
string A[maxn];
void file(){
	freopen("prodsum.INP","r",stdin);
	freopen("prodsum.OUT","w",stdout);
}
void nhap(){
	cin >> n;
	for(int i=1;i<=n;i++)
		cin >> A[i];
}

void solution(){
	int tich =1
	sort(A,A+n);
	for(int i=1;i<=n;i++)
    	tich = tich + i*A[i];
    cout << tich;
}
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	//file();
	nhap();
	solution();
	
	return 0;
}
