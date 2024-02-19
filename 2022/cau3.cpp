#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second

using namespace std;
const int maxn = 1e5 + 10;
int A[maxn],B[maxn];
ll n,l=0;

void file() {
  freopen("CAU3.INP", "r", stdin);
  freopen("CAU3.OUT", "w", stdout);
}
int checkprime(ll n){
	if(n<=1)
		return 0;
	for(int i = 2;i<n;i++)
		if(n%i==0)
			return 0;
	return 1;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	string s,temp="";
	cin >> s;
	//int m = 0;
	for(ll i = 0;i<s.size();i++){
		if(s[i]>='0' and s[i]<='9'){
			temp+=s[i];
		}
	}cout << temp;
  return 0;
}
// cout<<setprecision(3)<<fixed<<