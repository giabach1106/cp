#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define mp make_pair
using namespace std;
const int maxn = 2e5 + 10;
int A[maxn],B[maxn];
ll n,m,k,t,res= 0,dem = 0,ans = 0,a,b,c,d,x,y,z,sum1 = 0,sum2= 0;
string s;
vector<pair<ll,ll> > V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // file();
    cin >> k;

   	k *= 2;
   	for(ll i = 1;i*i<k;i++){
   		 if (k%i==0 and (i+k/i)%2) res++;
    }cout << res;
/*
n = l + l+1 + ... + r-1 + r
= (r+l) * (r-l+1) / 2
r-l+1 < r+l
-> r-l+1 <= căn n
từ đó tính được ra r+l (n / (r-l+1))
kiểm tra l, r là số nguyên hay không
*/
  return 0;
}
// cout<<setprecision(3)<<fixed<<