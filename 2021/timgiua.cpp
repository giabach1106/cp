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
const int maxn = 1e5 + 10;
const ll INF = 1e9;
int A[maxn];
ll n,m,k,t,res= INF,a,b,c,x,y,z,L,R,ans;
string s;
ll tmpl,tmpr;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
bool kzkz(ll x){
	 return (x + 1) / 2 * x;
}
void bs(){
	res = L;
	ll tmp = abs(L - kzkz(L)+kzkz(R));
	while(tmpl <= tmpr){
		ll mid = tmpl + (tmpr - tmpl)/2;
		ll tmpL = kzkz(mid) - kzkz(L-1);
		ll tmpR = kzkz(R) - kzkz(mid);
		ll tmptmp = tmpL - tmpR;
		if(tmp > abs(tmptmp)){res = mid;tmp = abs(tmptmp);}
        if(tmp == 0)break;
		if(tmptmp < 0) tmpl = mid+1;
		else tmpr = mid-1;
	}
	cout << res << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> L >> R;
	tmpl = L; tmpr= R-1;
	bs();	
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