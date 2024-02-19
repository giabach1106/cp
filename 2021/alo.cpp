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

    ll dp_f[n+1] = {}  , dp_l[n+1] = {} ;
	f : i -i
	l : n-i
//
	sum =0;
    for(int i = 1 ; i<= k ; i++) 
		sum += A[i] ;
	// tong 1 -> k
    dp_f[k] = sum ;
	// sum thay doi
    for(int i = k+1 ; i <= n ; i++){ // tong = A[2] - > A[k+1]
        sum += A[i] - A[i-k] ;
        dp_f[i] = max(dp_f[i-1] , sum); 
    }
//
    sum = 0;
    for(int i = n;i>=n-k+1;i--) 
		sum += A[i] ;
	
    dp_l[n-k+1] = sum; // tong lon nhat chay tu n ->n-k+1

    for(int i = n-k ;i>=1;i--){
        sum += A[i] - A[i+k] ;
        dp_l[i] = max(dp_l[i+1] , sum) ;
    }
//
    ll ans = LLONG_MAX ;
    //i = 1 : chọn từ 1 ->i +k-1
	// còn lại : 1->i-1 , n ->i+k
    for(int i = 1 ;i<=n-k;i++){
        ans = min(max(dp_f[i-1] , dp_l[i+k]) , ans) ;
    }
    cout << ans;

    return 0;
} // 1 2 3 4 5 6 7 8 9 10 11
 			
	// k = 3
	// tong 1->k
	//tong + 4 -1 = 2->4
dp[3] = sum  (tong 1->3)
dp[4] = max (dp[3],sum(2->4))
dp[5] = max(dp[4],sum(3->5))
chay tu duoi len vi neu T chon giua (5-7) thi...

 
// cout<<setprecision(3)<<fixed<<