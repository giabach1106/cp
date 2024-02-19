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
const int maxn = 1e9;
//int A[maxn][maxn];
ll n,m,k,t,res= 0,a,b,c,x,y,z,u,v,dem = 0;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	ll c,r;
	cin >> n >> c >> r;
	ll x =1,y; 
	for( y = 1;y*y<=n;y++){ // o(1e4)
		if(y*y >= n)
			break;
	} y *= y; ll k = 2;
	while(x < y){
		x += k;
		k += 2;
	}
	ll hang = y-( x - k+2)+1;
	if(hang % 2 == 0)
   		cout << hang << " " << n-(hang-1)*(hang-1) << endl;
   	else cout << hang << " "<<hang*hang+1-n << endl;
	x = c*c;
	y = (c-1)*(c-1);
	if(c % 2 == 1)
    	cout << x - r + 1;
    else 
    	cout << y + r;
/*	
					    1							n =1
			  	     2  3  4						n =2
				  5  6  7  8  9						n =3
	   	       10 11 12 13 14 15 16					n =4
    	    17 18 19 20 21 22 23 24 25				n =5
         26 27 28 29 30 31 32 33 34 35 36   		n =6
      37 38 39 40 41 42 43 44 45 46 47 48 49		n =7
   50 51 52 53 54 55 56 57 58 59 60 61 62 63 64		n =8
65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80		n =9
*/

  return 0;
}
// cout<<setprecision(3)<<fixed<<
/*
#                
#	  kiroz
#     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/