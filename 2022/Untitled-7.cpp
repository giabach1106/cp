#include <bits/stdc++.h>
using namespace std;
#define int long long
int snt[20000009];
void sang(int x) {
    fill(snt,snt+x+1,true);
    snt[0] = snt[1] = false;
    for(int i = 2; i <= x;i++) {
        if(snt[i] == true) {
            for(int j = i*i; j <= x;j+= i)
                snt[j] = false;
        }
    }
}
bool check(int a)
{
    if(a < 2)
        return false;
    for(int i = 2; i <= sqrt(a);i++) {
        if(a%i == 0) {
            return false;
        }
    }
    return true;
}
signed main() {
	freopen("snt.INP","r",stdin) ;
	freopen("snt.OUT","w",stdout) ;
    string s;
    sang(10000000);
   	cin >> s;
  	int max1 = -1e18;
   	int num = s.size();
   	for(int i = 1; i <= (1 << num);i++) {
       int p = i,a = 0;
       for(int j = 0; j <= num-1;j++) {
           if(p % 2 == 1)
             a = a*10+s[j]-48;
           p /= 2;
       }
       if(a >= 10000000) {
           if(check(a) == true)
                max1 = max(max1,a);
       }
       else {
           if(snt[a] == true)
                max1 = max(max1,a);
       }
   }
   if(max1 == -1e18)
        cout << -1;
   else
        cout << max1;
}