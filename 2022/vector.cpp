#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define pb push_back
using namespace std;

void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
//const int maxs = 1e5+10;
//const int maxm = 1e9;
const int maxn = 1e5+10;
int n;
vector< pair<int,int> > a;
vector< pair<int,int> > b,c;
int tmpX,tmpY;
map< pair<int,int>,int> demdem;

void duyet1(int x){
	if(x<n/2){
		for(int i=0;i<=1;i++){
			tmpX+=i*a[x].fi; tmpY+=i*a[x].se;
			duyet1(x+1);
			tmpX-=i*a[x].fi; tmpY-=i*a[x].se;
		}
	}
	else{
		b.push_back({tmpX,tmpY});
	}
}

void duyet2(int x){
	if(x<n){
		for(int i=0;i<=1;i++){
			tmpX+=i*a[x].fi; tmpY+=i*a[x].se;
			duyet2(x+1);
			tmpX-=i*a[x].fi; tmpY-=i*a[x].se;
		}
	}
	else{
		c.push_back({tmpX,tmpY});
		demdem[{tmpX,tmpY}]++;
	}
	
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		a.pb({x,y});
	}
	int u,v;
	cin>>u>>v;
	duyet1(0);
	duyet2(n/2);
	int cur=0;
	for(int i=0;i<b.size();i++){
		cur+=demdem[{u-b[i].fi,v-b[i].se}];
	}
	cout<<cur;
	return 0;
}