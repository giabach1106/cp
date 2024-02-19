#include <bits/stdc++.h>
using namespace std;
freopen("n1digit.inp","r",stdin);
freopen("n1digit.out","w",stdout);
bool check(long long x){
	long long dem = 0,du,so=0;
	 du = x % 10;
    while (x > 0)
    {
        if (x % 10 == du)
        {
            so++;
        }
        x /= 10;
        dem++;
    }
    if (so == dem) return 1;
    else return 0;
    
}
int main(){
	long long n,i,count=0;
    cin >> n;
    if (n < 10)
    {
        cout << n;
        return 0;
    }
    else
    {

        for (i = 10; i <= n; i++)
        {
            if (check(i)) count++;
        }
    }
    cout << count + 9;


	
	return 0;
}