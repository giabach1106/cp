#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second

using namespace std;
const int maxn = 1e5 + 10;
int A[maxn],f[maxn];
ll n;

void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
int fibo(ll n){
	if(n<0)
		return -1;
	else if(n ==1 || n==0)
		return n;
	else return fibo(n-1)+fibo(n-2);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> n;
	ll l =0;
	for(int i = 1;i<=n;i++){
		if(fibo(i)){
			f[l] = fibo(i);
			l++;
		}
	}for(int i = 0;i<l;i++)
		if(f[i] >= 100)
			f[i] %= 100;
	cout << f[l-1]<< endl;
	sort(f,f+l);
	ll dem =1 ;
	for(ll i = 0;i<l-1;i++){
		if(f[i] != f[i+1])
			dem++;
	}cout << dem;
  return 0;
}
// cout<<setprecision(3)<<fixed<<