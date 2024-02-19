#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second

using namespace std;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

const int maxs = 1e7+10;
const int maxm = 1e9;
const int maxn = 41;

int A[maxn],s[maxs];
int n,m,res = 0,n1,n2;
struct d{
	int kl,gt;
}typedef d;
vector<d> v1, v2;
d vang1[maxn],vang2[maxn],temp;

int chat (int l, int r, int x)
{
	int vt=-1;
	while (l<=r){
		int mid = (l+r)/2;
		if (v2[mid].kl<=x){
			l=mid+1;
			vt=mid;
		} else r=mid-1;
	}
	return vt;
}

int comp(d a,d b){
	if(a.kl >= b.kl) 
		return 0;
	return 1;
}
void duyet1(int u, int kl, int gt){
	if(kl > m) 
		return;
	if(u == n1+1){
		temp.kl = kl;
		temp.gt = gt;
		v1.push_back(temp);
		return;
	}
	else{
		duyet1(u+1,kl,gt);
		duyet1(u+1,kl+vang1[u].kl,gt+vang1[u].gt);
	}
}
void duyet2 (int u, int kl, int gt){
	if (kl>m) return;
	if (u==n2+1){
		temp.kl=kl;
		temp.gt=gt;
		v2.push_back (temp);
		return;
	}
	else{
		duyet2(u+1, kl,gt);
		duyet2(u+1, kl+vang2[u].kl, gt+vang2[u].gt);
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> n >> m;
	n2 = n/2;
	n1 = n-n2;
	for(int i = 1;i<=n1;i++) 
		cin >> vang1[i].kl >> vang1[i].gt;
	for(int i = 1;i<=n2;i++) 
		cin >> vang2[i].kl >> vang2[i].gt;
	duyet1(1,0,0);
	duyet2(1,0,0);
	sort (v2.begin(),v2.end(),comp);
	s[0] = v2[0].gt;
	for(int i = 1;i<v2.size();i++){
		s[i] = max(s[i-1],v2[i].gt);
		res = max(res,v2[i].gt);
	}
	for(int i = 0;i<v1.size();i++){
		int vt = chat(0,v2.size()-1,m - v1[i].kl);
		if(vt != -1) res = max(res,s[vt]+v1[i].gt);
		res = max(res,v1[i].gt);
	
	} cout << res;
  return 0;
}
// cout<<setprecision(3)<<fixed<<