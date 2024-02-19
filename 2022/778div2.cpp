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
const int maxn = 51;
int A[maxn];
ll n,m,k,t,res= 0,a,b,c,x,y,z,d,tmp;
string s;
vector <pair<ll,ll> >V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
void bachdeptraivailon(){
	for(ll i = 0;i<= maxn;i++){
		for(ll j = 0;j<=maxn;j++){
			if(sqrt(i*i+j*j) == int(sqrt(i*i+j*j)))
				V.pb(mp(i,j));
		}
	}
}
void solve(){
	res = 0,tmp = 0;
	cin >> x >> y;
	for(ll i = 0;i<(int)V.size();i++){
		if((V[i].fi == x and V[i].se == y) or (V[i].fi == y and V[i].se == x)){
			tmp++;
			break;
		}
	}
	if(tmp == 0)
		cout << 2 << endl;
	else if(x == 0 and y == 0)
		cout << 0 << endl;
	else cout << 1 << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	bachdeptraivailon();
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