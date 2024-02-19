#include <bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define pb push_back

using namespace std;
const int maxn = 510;
const int maxs = 1e7;
int inf = maxs;
int A[maxn][maxn];
int n,m,sieve[maxs], next[maxs];
int mina= inf, minb = inf;
//mt19937_64 rng;
void file(){
  freopen(".INP", "r", stdin);
  freopen(".OUT", "w", stdout);
}

void snt(){
	for(int i = 0;i<= maxs;i++)
		sieve[i] =1;
	sieve[0] = 0;
	sieve[1] = 0;
	for(int i = 2;i*i <=(maxs);i++){
		if(sieve[i]){
			for(int j = i*i;j<=maxs;j++){
				sieve[j] =0;
				}
		}
	}
}
int next(int x){
	int chenhlech = x;
	while(sieve[chenhlech] == 0){
		chenhlech++;
	}return chenhlech -x;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //rng.seed((int)main ^ time(0));
	// file();
	/*
	#ifdef kiroz
        auto starttime = chrono::high_resolution_clock::now();
    #endif
    */
	cin >> n >> m;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j+=i){
			cin >> A[i][j];
			A[i][j] = next(A[i][j]);
		}
	}
	snt();
	for(int i= 0;i<n;i++){
		int count = 0;
		for(int j= 0;j<m;j++) {
			count += A[i][j];
		}mina = min(mina,count);
	}
	for(int j = 0;j<m;j++){
		count = 0;
		for(int i =0;i<n;i++){
			count += A[i][j];
		}minb = min(minb,count);
	}
	cout << min(mina,minb);
	/*
 	#ifdef kiroz
        auto endtime = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::milliseconds>(endtime - starttime).count();
        cout << "\n=====" << "\nUsed: " << duration << " ms\n";
    #endif
    */
  return 0;
}// cout<<setprecision(3)<<fixed<<