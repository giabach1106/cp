#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
using namespace std;
const int maxn = 1010;
//int A[maxn][maxn];
ll n , m , t , cnt = 0 ;

void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//file();
    cin >> n >> m >> t ;
    ll A[n+1][m+1] ;
    for(int i=1 ;i<= n ;i++) 
    	for(int j = 1 ; j<= m ; j++) 
    		cin >> A[i][j] ;
    for(int i = 1 ; i<= n ; i++){
        for(int j = 1 ; j<= m ; j++){
            ll s = A[i][j] , sum = 0 ;
            bool check =0 ;
            for(int k = j ; k>= 1 ; k--){
                if(A[i][k]!=s) 
                	break ;
                sum ++ ;
            }
            for(int k = j ; k<= m ; k++){
                if(A[i][k]!=s) 
                	break ;
                sum ++ ;
            }
            if(sum>t) 
            	check = 1 ;
            sum =0 ;
            for(int k = i ; k>= 1 ; k--){
                if(A[k][j]!=s) 
                	break ;
                sum ++ ;
            }
            for(int k = i ; k<= n ; k++){
                if(A[k][j]!=s) 
                	break ;
                sum++ ;
            }
            if(sum>t) 
            	check = 1 ;
            if(!check&&A[i][j]!=0) 
            	cnt++ ;
        	}
    	}
    cout << cnt ;
	return 0;
}
// cout<<setprecision(3)<<fixed<<