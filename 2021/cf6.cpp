#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 10e5+5 ;
int A[maxn];
ll n,k;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	string s;
	cin >> s;
	int dem1=0,dem2=0;
	for(int i=0;i<s.size();i++){
		if(s[i] >= 'A'&& s[i] <= 'Z')
			dem1++;
		else dem2++;
	}
	if(dem1 > dem2){
		for(int i=0;i<s.size();i++){
			if(s[i] >= 'a'&& s[i] <= 'z')
			s[i] = s[i] -32;
	}
}
	else {
	
	for(int i=0;i<s.size();i++){
		if(s[i] >= 'A'&& s[i] <= 'Z')
			s[i] = s[i] +32;
	}
}
	

		
	cout << s;
	return 0;
}	


