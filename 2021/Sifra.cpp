#include <bits/stdc++.h>
#define ll long long

using namespace std;
//const int maxn = 10e5+5 ;
//int A[maxn];
//ll n;
string A[55];
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	string a;
	cin >> a;
	for(int i=0;i<a.size();i++)
		if(a[i] >= 'a' && a[i] <= 'z')
			a[i] = 0;
	string s;
	long long l = 0;
	for(int i=0;i<a.size();i++){
		if(a[i] >= 1 && a[i] <= 9){
			A[l]= A[l]+a[i];
		}
		if(a[i] == 0 && (a[i-1] != 0 || a[i+1] != 0))
			l++;
	}
	for(int i= 0;i<50;i++)
		cout << A[i];
	
	return 0;
}


