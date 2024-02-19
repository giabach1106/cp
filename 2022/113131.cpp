#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
using namespace std;

char d[30]= ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'];
ll n;
string s,p;
void file() {
  freopen("4_9.INP", "r", stdin);
  freopen("4_9.OUT", "w", stdout);
}
void duyet(int x){
	char j;
	if(x>n){
		cout << p << endl;
	}
	for(j = 'A'; j<'Z';j++){
		if(d[j] >0){
			d[j]--;
			p+=j;
			duyet(x+1);
			delete(p,x,1);
			d[j]++;
		}
	}
	
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// file();
	cin >> s;
	n= strlen(s);
	for(int i=1;i<=n;i++){
		d[s[i]]++;
		p = "";
		duyet(1);
	}
	return 0;
}