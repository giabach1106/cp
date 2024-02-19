#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 1e5+10 ;
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
	for(int i = 0;i<n;i++)
		cin >> A[i];
	sort(A,A+n,greater<int>());
	for(int i = 0;i<n;i++)
		cout << A[i] << " ";
	return 0;
}
//cout<<setprecision(3)<<fixed<<
