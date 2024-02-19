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
const int maxn = 1e6 + 10;
int n, k;
int a[maxn],res = 0;

bool check(int x) {
    int st = 1;
    for (int i = 1; i <= k; i++) {
        st = upper_bound(a + 1, a + n + 1, a[st] + 2 * x) - a;
        if (st == n + 1)
            return true;
    }
    return false;
}
void bs(ll l , ll r){
	 while (l <= r) {
        int mid = (l + r) / 2;
        if (check(mid)) {
            r = mid - 1;
            res = mid;
        }
        else l = mid + 1;
        
    }
    cout << res / 2;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] = a[i] * 2;
    }
    cin >> k;
    a[n + 1] = 1e18;
    sort(a + 1, a + n + 1);
    int l = 0, r = 2e9, res = 0;
	bs(l,r);
	return 0;
}