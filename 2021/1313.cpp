#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i=(a), _b=(b); i < _b; ++i)
#define FORU(i, a, b) for(int i=(a), _b=(b); i <= _b; ++i)
#define FORD(i, a, b) for(int i=(a), _b=(b); i >= _b; --i)
#define maxn 1111
 
int l[2][maxn], r[2][maxn], h[2][maxn], a[maxn][maxn];
 
int main(){
    //freopen("QBRECT.in","r",stdin);
     int m,n,kq = 0;
     scanf("%d %d",&m,&n);
     FORU(i, 1, m) FORU(j, 1, n) scanf("%d",&a[i][j]);
     memset(h,0,sizeof(h));
     FORU(i, 1, m) FOR(t, 0, 2){
          FORU(j, 1, n) {
               if(a[i][j]==t)
                     h[t][j]++;
               else h[t][j] = 0;
          }
          h[t][0] = -1; h[t][n+1] = -1;
          FORU(j, 1, n){
               l[t][j] = j;
               while(h[t][l[t][j]-1]>=h[t][j]) l[t][j] = l[t][l[t][j]-1];
          }
          FORD(j, n, 1){
               r[t][j] = j;
               while(h[t][r[t][j]+1]>=h[t][j]) r[t][j] = r[t][r[t][j]+1];
          }
          FORU(j, 1, n){
               kq = max(kq,min(h[t][j],r[t][j]-l[t][j]+1));
          }
     }
     printf("%d",kq);
     //getch();
}
 
