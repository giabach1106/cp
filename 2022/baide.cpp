#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
#define pll pair<ll , ll>
#define mp make_pair
using namespace std;
const int maxn = 1e6 + 10;
const ll INF = (ll)1e18;
ll A[maxn],sum[maxn],isPrime[maxn];

ll n,m,k,t;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

void sieve(int N){
    bool isPrime[N+1];
    for(int i = 0; i <= N;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i) {
         if(isPrime[i] == true) {
             for(int j = i * i; j <= N; j += i)
                 isPrime[j] = false;
        
    	}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	sieve(maxn);
	cin >> n;
	for(ll i = 1 ; i <= n ; i ++ )
		cin >> A[i]; 
	sum[0] = A[0];
	// prefix sum
	for(ll i = 1; i <n ; i++ )
		sum[i] = sum[i-1]+A[i];

	ll ans = -INF;
	ll lowest_Left = INF;
	for(ll r = 1; r <= n; r++){
		if(isPrime[A[r]]){
			lowest_Left = min(lowest_Left,sum[r-1]);
			ans = max(ans, sum[r] - lowest_Left);
		}
	}
	cout << ans;
	/*
	sàng,prefix sum
	tổng[l,r]= sum[r] - sum[l-1];
	có r cố định, sum[r] cố định
	=> để tìm tổng max -> sum[l-1] min;
	
	*/
  return 0;
}
// cout<<setprecision(3)<<fixed<<