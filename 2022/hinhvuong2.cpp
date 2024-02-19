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
const ll maxt = 1e9+7;
int A[maxn];
ll n,m,k,t;
string s;

void file() {
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}
/*
int toint(string s){
    int l1 = s.length();
    int num1 = 0;
    for(int i = l1 - 1; i >= 0; --i){
        num1 += (int)(s[i] - '0') * pow(10, l1-i-1);
    }
    return num1;
}
*/
string tostring(long long n){
    string s="";
    while (n>0){
        s=char(n%10+48)+s;
        n/=10;
    }
    return s;
}
string nhan(string a, int b) {
	int c, carry = 0;
	string d, T = "";
	for (int i = a.size() - 1; i >= 0; i--) {
		c = (a[i] - 48) * b + carry;
		carry = c / 10;
		T = ((char) (c % 10 + 48)) + T;
	}
	
	d = "";
	if (carry > 0) {
		ostringstream convert;
		convert << carry;
		d = convert.str();
	}
	
	T = d + T;
	while (T.size() > 1 && T[0] == '0')
		T.erase(0, 1);
	return T;
}
string chia(string number, int divisor){
    
    string ans;
    int idx = 0;
    int temp = number[idx] - '0';
    while (temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');
    while (number.size() > idx) {
        ans += (temp / divisor) + '0';
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }
    if (ans.length() == 0)
        return "0";
    return ans;
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
int mod(string num, ll a){
    int res = 0;
 
    for (int i = 0; i < num.length(); i++)
        res = (res * 10 + (int)num[i] - '0') % a;
 
    return res;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> n >> m;
	if(n<m)
		swap(m,n);
	string M =  tostring(m);
	string N = tostring(n);
	string res = nhan(nhan(M,m+1),2*m+1);
	res = chia(res, 6);
	string res2 = nhan(nhan(M,n-m), m+1);
	res2 = chia(res2,2);
	cout << mod(tong(res,res2),maxt);
	//res =   m * (m + 1) * (2 * m + 1) / 6 + (n - m) * m *(m + 1) / 2;
	//cout << res % maxt;
  return 0;
}
// cout<<setprecision(3)<<fixed<<