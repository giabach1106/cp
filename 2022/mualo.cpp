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
const int maxn = 5010;
int A[maxn],B[maxn];
ll n,m,k,t,res= 0,a,b,c,x,y,z;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
bool check(ll x){
	ll dem = 0;
	for(ll i = 0;i<n;i++) dem += (1LL * (A[i] / x) + 1LL * (A[i] % x != 0));
	return dem <= k;	
}
ll bs(ll l,ll r){
	while(l<=r){
		ll mid = l+(r-l)/2;
		if(check(mid)) res = mid,r = mid-1;
		else l = mid+1;
	}
	return res;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> n >> k;
	for(ll i = 0;i<n;i++){
		cin >> A[i];
		B[i] = A[i];
	}sort(B,B+n,greater<ll>());
	cout << bs(1,B[0]);
	
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