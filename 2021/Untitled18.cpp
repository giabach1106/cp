#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int maxn = 10e5+5 ;
int A[maxn],B[maxn];
ll n;
void file(){
	freopen(".INP","r",stdin);
	freopen(".OUT","w",stdout);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//file();
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> A[i];
		B[i] = A[i];
	}
	sort(B,B+n);
	for(int i=0;i<n;i++){
		int p = -1;
		for (int l = -1, r = n - 1; l < r; ){
        	int m = l + (r - l) / 2 + 1;
        	if (A[i] > B[m])
         	   p = l = m;
       	 	else
            	r = m - 1;
    	}cout << p+1 << " ";
	}
	return 0;
}


