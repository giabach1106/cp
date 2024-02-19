#include <bits/stdc++.h>
#define ll long long
#define all(a) a.begin(), a.end()

using namespace std;
const ll maxn = 100;
int A[maxn],f[maxn];
ll n,sum=0,result=0,c;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
int duyet(int i){
	int j;
   sum=sum+A[i];
   if (sum<=c){
              if (result<sum) result=sum;
              for (j=i+1; j<=n; j++) duyet(j);
      }        
   sum=sum-A[i]; 
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	// file();
	cin >> c >> n;
	for(int i = 1;i<=n;i++)
		cin >> A[i];
	A[0] = 0;
	duyet(0);
	cout << result;
  return 0;
}
// cout<<setprecision(3)<<fixed<<
