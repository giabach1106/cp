#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 10e6+5 ;
int A[maxn];
ll n;
void file(){
	freopen("TICHLONNHAT.INP","r",stdin);
	freopen("TICHLONNHAT.OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> A[i];
	sort(A,A+n, greater<int>());
	cout <<  max((A[0] * A[1] * A[2]),(A[n-1]*A[n-2]*A[0]));
	return 0;
} 
