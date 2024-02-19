#include <bits/stdc++.h>
using namespace std;
   int m,n;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}

void solution(){
	int dem=0,demM=0;
	int m1=m;
	while(m1>0){
		demM++;
		m1 = m1/10;
	}
	dem = ((n-m)/pow(10,demM))+1;
	cout << dem; 
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	//file();

	cin >> m >> n;
	solution();
	

//cout<<setprecision(3)<<fixed<<
	return 0;
}