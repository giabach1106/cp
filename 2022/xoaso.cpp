#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
using namespace std;
const int maxn = 1010;
int A[maxn][maxn];
ll k;
string b;

void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
    cin >> b >> k;
    ll a[b.length()];
    for(ll i = 0 ; i<b.length() ; i++){
        int s = b[i];
        a[i] = s-48;
    }
    ll t = 0 ;
    if(b.length()-1>0){
    while(k>0&&t+k<=b.length()-1){
        ll b[k+1];
        for(ll i = 0+t ; i<= 0+t+k ; i++ ){
            b[i-t] = a[i];
        }
        sort (b,b+k+1);
            for(ll i = 0+t ; i<= 0+t+k ; i++ ){
                if (a[i]==b[k]){
                    cout << a[i];
                    k -= (i-t) ;
                    t = i+1;
                    break;
                }
            }

    }
		if(t+k<=b.length()-1&&k==0){
        	for(ll i= t; i<= b.length()-1 ;i++){
            	cout << a[i];
        	}
    	}
    }
	return 0;
}
// cout<<setprecision(3)<<fixed<<