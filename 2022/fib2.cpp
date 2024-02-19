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
const int maxn = 60;
int dp[maxn],F[maxn];
ll n,m,k,t,res= 0,a,b,c,x,y,z,tmp=4;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
ll fibo(ll n, ll k){
	if(n == 0)
		return 1;
	if(n==1 )
		return 0;
	if(k<=F[n-2])
		return fibo(n-2,k);
	return dp[n-2] + fibo(n-1,k-F[n-2]);
}
void solve(){
	res = 0;
	cin >> n >> k;
	if(n >= tmp){
		for(ll i = tmp;i<=n;i++){
			dp[i] = dp[i-1]+dp[i-2];
			F[i] = F[i-1] + F[i-2];
		}
		tmp = n+1;
	}
	cout << fibo(n,k) << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	dp[0] =1; dp[2] =1;dp[3]=1;F[0]=1;F[1] =1; dp[1] = 0; F[2] = 2; F[3] =3; 
	cin >> t;
	while(t--){
		solve();
	}	
  return 0;
}
// cout<<setprecision(3)<<fixed<<
/*
#                       d*##$.
# zP"""""$e.           $"    $o
#4$       '$          $"      $
#'$        '$        J$       $F
# 'b        $k       $>       $
#  $k        $r     J$       d$
#  '$         $     $"       $~
#   '$        "$   '$E       $
#    $         $L   $"      $F ...
#     $.       4B   $      $$$*"""*b
#     '$        $.  $$     $$      $F
#      "$       R$  $F     $"      $
#       $k      ?$ u*     dF      .$
#       ^$.      $$"     z$      u$$$$e
#        #$b             $E.dW@e$"    ?$
#         #$           .o$$# d$$$$c    ?F
#          $      .d$$#" . zo$>   #$r .uF
#          $L .u$*"      $&$$$k   .$$d$$F
#           $$"            ""^"$$$P"$P9$
#          JP              .o$$$$u:$P $$
#          $          ..ue$"      ""  $"
#         d$          $F              $
#         $$     ....udE             4B
#          #$    """"` $r            @$
#           ^$L        '$            $F
#             RN        4N           $
#              *$b                  d$
#               $$k                 $F
#               $$b                $F
#                 $""       	   $F
#                 '$                $
#                  $L               $
#                  '$               $
#                   $               $
#
#	  kiroz
#     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/