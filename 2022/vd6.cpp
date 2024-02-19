#include <bits/stdc++.h>
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define mp make_pair
using namespace std;
const int maxn = 1e5 + 10;
int A[maxn];
ll n,m,k,t,res= 0,a,b,c,x,y,z;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	// file();
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if((a+b+c)%10 == 0)
		printf("%d",a+b+c);
	else printf("%d",(a+b+c)%10);
	
  return 0;
}
