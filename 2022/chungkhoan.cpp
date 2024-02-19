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
ll n ,d ;
const int maxn = 1e5 + 10;
//ll A[maxn];
//ll n,m,k,t,res= 0;
//string s;
set<pll> MIN ;
set<pll , greater<pll> >  MAX ;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//file();
	cin >> n >> d ;
    ll A[n+5];
    for(int i = 1 ;i<= n;i++) 
    	cin >> A[i] ;
    
    MIN.insert(mp(A[1] , 1));
	MAX.insert(mp(A[1] , 1));
    ll Start = 1;
    ll ans = 1;
    for(int i = 2 ;i<=n;i++){
        MIN.insert(mp(A[i],i)); 
        MAX.insert(mp(A[i],i));
        pll M3 = *MIN.begin(),M4 = *MAX.begin() ;
        while(Start<i){
            pll M1 = *MIN.begin()  , M2 = *MAX.begin();
            if(abs(M1.fi-M2.fi)<=d){
                ans = max(ans,(ll)MIN.size());
                break ;
            }
            else{
                MIN.erase(mp(A[Start] , Start));
                MAX.erase(mp(A[Start] , Start)) ;
                Start++ ;
            }
        }
    }
    cout << ans;
	return 0;
}// cout<<setprecision(3)<<fixed<<












/*
chạy 2 pointer
set để có phần tử lớn nhất và phần tử nhỏ nhất
nếu mà khoảng cách nó >= k
thì break
không thì cứ chạy thôi
*/