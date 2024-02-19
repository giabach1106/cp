#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
using namespace std;
const int maxn = 1e5+10;
ll n,m;
vector < pair < ll , ll> > A ; 
void file() {
  freopen("MINDIS.INP", "r", stdin);
  freopen("MINDIS.OUT", "w", stdout);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0) ;
    //file;
    cin >> n >> m ; 
    ll cnt[m+1] = {} , cnt_spe = 0 ; 
    for(int i = 1 ; i<= n ; i++){
        ll a , b ; 
        cin >> a >> b ; 
        A.push_back(make_pair(a , b)) ; 
    }
    sort(A.begin() , A.end()) ; 
    ll right = 0 , left = 0 ; 
    for(int i = 0 ; i< n ; i++){
        ll a = A[i].se ; 
        if(cnt[a]==0) cnt_spe++ ; 
        cnt[a] ++ ; 
        if(cnt_spe==m){
            right = i ; 
            break ; 
        }
    }
    ll ans = A[right].fi - A[0].fi ; 
    for(int i = right ; i < n ; i++){
        ll b = A[i].se ; 
        cnt[b]++ ;
        for(int k = left ; k <=i ; k++){
            ll a = A[k].se ; 
            if(cnt[a]==1){
                ans = min(ans , A[i].fi - A[k-1].fi) ; 
                break ;
            }
            else {
                cnt[a] -- ; 
                left = k+1 ; 
            }
        }
    }
    cout << ans ; 
    return 0;
}
// cout<<setprecision(3)<<fixed<<