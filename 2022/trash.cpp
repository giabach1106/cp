#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()

using namespace std;
const int maxn = 1e5 + 10;
int ans = 1e9;
int n;//int i,A[maxn];
vector <int> A,B;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> n;
	A.resize(n);
	B.resize(n);
	f0(i,n) cin >> A[i]; sort(all(A));
	f0(i,n) cin >> B[i]; sort(all(B));
	A.resize(unique(all(A))-A.begin());
	B.resize(unique(all(B))-B.begin());
	for(auto i : A){
		int x = lower_bound(all(B),0ll-i)-B.begin();
		int temp = min(abs(B[max(x,0ll)]+i),abs(B[x+1]+i));
		ans = min(ans,temp);
	}cout << ans;
  return 0;
}
// cout<<setprecision(3)<<fixed<<