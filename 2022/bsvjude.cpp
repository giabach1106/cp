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
const int maxn = 3e6 + 10;
int A[maxn],dp[maxn];
ll n,m,k,t,res,kq = 0,a,b,c,x,y,z,tmp;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
void solve(){
	for(ll i = n;i;i--){
		res = res - tmp;
		tmp = tmp + dp[i];
		t = max(0ll, (A[i]-1 + min(k,i) - res)/min(k,i));
		res += t * min(k,i);
		tmp = tmp + t;
		kq = kq + t;
		dp[i - min(i,k)] -= t;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> n >> k;
	for(ll i = 1;i<=n;i++) cin >> A[i];
	solve();
	cout << kq << " ";
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