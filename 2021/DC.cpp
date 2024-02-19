#include <bits/stdc++.h>
#define ll unsigned long long

using namespace std;
const int maxn = 100000+10 ;
ll A[maxn],B[maxn];
vector <ll> x;
vector <ll> s;
ll n,k,ans;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		cin >> A[i] >> B[i];
		x.push_back(A[i]);
		x.push_back(B[i]);
	}
	sort(x.begin(),x.end());
	x.resize(unique(x.begin(),x.end()) - x.begin());
    s.resize(2*x.size());
	ll l,r;
	for(int i=1;i<=n;i++){
		l = lower_bound(x.begin(), x.end(), A[i]) - x.begin();
        r = lower_bound(x.begin(), x.end(), B[i]) - x.begin();
        s[l*2] ++;
        s[r*2+1] --;
	}
	for(int i=1;i<s.size();i++) 
		s[i] = s[i] + s[i-1];
	for(int i=0;i<s.size();i++){
        if(s[i] == k){
            if(i & 1) ans = ans + (x[(i+1)>>1] - x[(i-1)>>1]-1);
            else ans++;
        }
    }
    cout << ans;
	return 0;
}
