#include <bits/stdc++.h>
#include <map>
#include <vector>
#include <string>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef unsigned long long ull;
#define umap unordered_map
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")-
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fillchar(a,x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

bool cmp(pair<pii,pii> a,pair<pii,pii>b){
    return a.fi.se <= b.fi.se;
}
bool cmp2(pair<pii,pii> a,pair<pii,pii>b){
    return a.se.fi <= b.se.fi;
}
int main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
    faster;
    int n;
    cin >> n;
    pair<pii,pii> a[n+5];
    FOR(i,1,n){
        cin >> a[i].fi.fi;
    }
    FOR(i,1,n){
        cin >> a[i].fi.se;
        a[i].se.fi = i;
    }
    sort(a+1,a+1+n,cmp);
    FOR(i,1,n){
        a[i].se.se = a[i].fi.fi-n+i-1;
    }
    sort(a+1,a+1+n,cmp2);
    FOR(i,1,n){
        cout << a[i].se.se <<" ";
    }
    return 0;
}
