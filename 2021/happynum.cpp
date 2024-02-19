#include <bits/stdc++.h>
#define ll long long

using namespace std;
//const int maxn = 10e5+5 ;
//int A[maxn];
ll t;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
void solve() {
  	int n;
  	cin >> n;

  	set<int> st;
  	while (n != 1){
    	if (st.count(n)) {
      		cout << "NO" << endl;
      return;
    }
    st.insert(n);
	
    int m = n, k = 0, d;
    while (m > 0) {
      	d = m % 10;
      	k += d * d;
      	m /= 10;
    	}
    n = k;
  	}
  	cout << "YES" << endl;
}

int main() {
  	ios::sync_with_stdio(false);
  	cin.tie(0);
  	//file();
	cin >> t;
  	while (t--){
    	solve();
  	}
  	return 0;
}



