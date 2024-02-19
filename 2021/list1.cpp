#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 10e5+5 ;
int A[maxn];
ll n;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
list<int> initList(int n)
{
	list<int> a;
	for (int i = 1; i <= n; i++){
		a.push_back(i);
	}
	return a;
}

vector<int> verifyFunction(int n)
{
	list<int> lst = initList(n);
	vector<int> res(lst.begin(), lst.end());
	return res;
}

