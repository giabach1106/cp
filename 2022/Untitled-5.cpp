#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()

using namespace std;
const int maxn = 6000;
int A[maxn],B[maxn],C[maxn];
ll n;
void file() {
  freopen("NUM6.INP", "r", stdin);
  freopen("NUM6.OUT", "w", stdout);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> n;
	int dem = 0;
	for(int i = 0;i<n;i++){
		cin >> A[i];
		if(A[i] == 0)
			dem++;
		}
	if(n<=12){
		for(int i = 0; i < n; i++){
			
		}
	}
  return 0;
}
// cout<<setprecision(3)<<fixed<<;