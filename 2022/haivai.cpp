#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 1000 ;
int A[maxn],B[maxn];
ll n,H;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	//file();
	cin >> n >> H;
	ll ans = 0;
	for(int i=0;i<n;i++)
		cin >> A[i];
	for(int i = 1 ; i<= n ; i++){
        ll sum = 0 ;
        ll cnt = 0 ;
        for(int j = i ; j>= 1 ; j--){
            if(cnt<=H){
                cnt+=3 ;
                sum += A[j] ;
            }
            else break ;
        }
        cnt = 0 ;
        for(int j = i ; j <= n ; j++){
            if(cnt<=H){
                cnt+= 3 ;
                sum+= A[j] ;
            }
        }
        ans = max(ans , sum-A[i]) ;
    }
    cout << ans ;
	return 0;
}
//cout<<setprecision(3)<<fixed<<