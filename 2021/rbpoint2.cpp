#include <bits/stdc++.h>
using namespace std;
const int maxn = 10e5+5;
int A[maxn],n,res;
vector<pair<int,int>> v;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n;
	for(int i=0;i<n;i++)
		v.push_back(make_pair(A[i],1));
	for(int i=0;i<n;i++)
		v.push_back(make_pair(A[i],2));
	sort(v.begin(),v.end());
	for(int i=1;i<n*2;i++)
		if((v[i].first - v[i-1].first < res)&& (v[i].second != v[i-1].second))
			res = v[i].first -v[i-1].first;
		cout << res;
	return 0;
}