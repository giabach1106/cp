#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
using namespace std;
const int maxn = 1e5 + 10;
//int A[maxn];
ll n,m,k,t,sum= 0;
string s;

void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> n >> k;
	ll A[n+5] ;
	for(int i = 1 ;i<=n;i++) 
	  	cin >> A[i] ;	

    ll dp_f[n+1] = {} , dp_l[n+1] = {} ;

	sum =0;
    for(int i = 1 ; i<= k ; i++) 
		sum += A[i] ;

    dp_f[k] = sum ;

    for(int i = k+1 ; i <= n ; i++){
        sum += A[i] - A[i-k] ;
        dp_f[i] = max(dp_f[i-1] , sum) ;
    }

    sum = 0;
    for(int i = n;i>=n-k+1;i--) 
		sum += A[i] ;

    dp_l[n-k+1] = sum;

    for(int i = n-k ; i>= 1 ; i--){
        sum += A[i] - A[i+k] ;
        dp_l[i] = max(dp_l[i+1] , sum) ;
    }
    ll ans = LLONG_MAX ;
    
    for(int i = 2 ; i<= n-k ; i++){
        ans = min(max(dp_f[i-1] , dp_l[i+k]) , ans) ;
    }
    cout << ans;

    return 0;
}
// cout<<setprecision(3)<<fixed<<