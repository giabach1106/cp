#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define endl '\n'
using namespace std;
const int maxn = 1e5 + 10;
int A[maxn];
ll n,m,k,t,res= 0;
string s;
vector <ll> V;
void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
string tong(string a, string b){		// 1234
	string c="";					//	  + 859
	int tong=0,nho=0;			//	-------------
					//					   2093			
	while(a.size() > b.size()) b="0"+b;
	while(a.size() < b.size()) a="0"+a;

	for(int i=a.size()-1;i>=0;i--){
		tong = (a[i] -'0') +(b[i]-'0') + nho;
		nho = tong/10;
		c= char(tong%10+48) +c;
	}if(nho>0) c = "1"+c;
	return c;
}
string tru(string a, string b){
    string res="";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    bool neg=false;
    if(a<b)
    {
        swap(a,b);
        neg=true;
    }
    int borrow=0;
    for(int i=a.length()-1; i>=0;i--)
    {
        int tmp=a[i]-b[i]-borrow;
        if(tmp<0)
        {
            tmp+=10;
            borrow=1;
        }
        else borrow=0;
        res=(char)(tmp%10 + 48) + res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    if(neg) res="-"+res;
    return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	ll demx,demy,i;
	string x,y,maxX,minN;
	cin >> x >> y;
	for(i = 0;i<x.size();i++)
		if(x[i] == '.'){
			demx = i+1;
			break;
			}
	for(i = 0;i<y.size();i++)
		if(y[i] == '.'){
			demy = i+1;
			break;			
			}
	ll Max = max(x.size()-demx,y.size()-demy);
	for(i = 0;i<x.size();i++){
		if(x[i] == '.'){
			ll k = i;
			while(i < max(Max,x.size()-k)){
				if(i > x.size())
					x[i]='0';
				x[i] = x[i+1];
				i++;
			}break;
		}
	}
	for(i = 0;i<y.size();i++){
		if(y[i] == '.'){
			ll k = i;
			while(i < max(Max,y.size()-k)){
				if(i > y.size())
					y[i]='0';
				y[i] = y[i+1];
				i++;
			}break;
		}
	}
	cout << tru(x,y) << " "<<cong(x,y);
  return 0;
}
// cout<<setprecision(3)<<fixed<<