#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define pb push_back

using namespace std;
const int maxn = 1e5 + 10;
int A[maxn];
ll n,t;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

string mul(string a, string b){
    string res="";
    int n=a.length();
    int m=b.length();
    int len=n+m-1;
    int carry=0;
    for(int i=len;i>=0;i--)
    {
        int tmp=0;
        for(int j=n-1;j>=0;j--)
            if(i-j<=m && i-j>=1)
            {
                int a1=a[j]-48;
                int b1=b[i-j-1]-48;
                tmp+=a1*b1;
            }
            tmp+=carry;
            carry=tmp/10;
            res=(char)(tmp%10 + 48)+res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    return res;
}


void solve(){
	string str;
	for(ll i = 1;i<=n;i++){
		str = str + '1';
	}
	cout <<  mul(str,str) << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> t;
	while(t--){
		cin >> n;
		solve();
	}
	
  return 0;
}
// cout<<setprecision(3)<<fixed<<