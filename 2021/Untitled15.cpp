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
	int Max,Min,ans=maxn;
	cin >> n;
	for(int i= 0 ;i<n;i++){
		cin >> A[i];
		B[i] = A[i];
	}sort(B,B+n);
	Max = B[0];
	Min = B[n-1];
	for (int i = 0; i < n - 1; i++) {
        if (A[i] == Max || A[i] == Min) {
            for (int j = i + 1; j < n; j++) {
                if (A[j] == Min && A[i] == Max) {
                    ans = min(ans, j - i + 1);
                }
                if (A[j] == Max && A[i] == Min) {
                    ans = min(ans, j - i + 1);
                }
            }
        }
    }
    cout << ans << endl;
	return 0;
}


