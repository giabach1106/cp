#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
void IN(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}
const int N=1e6;
int check[N];

void sangNT(){
    for(ll i = 1;i<=N;i++) check[i] = i;
    for(ll i = 2;i*i<=N;i++){
        if(check[i] == i){
            for(ll j = i*i;j<=N;j+=i){
                if(check[j] == j) check[j] = i;
            }
        }
    }
}
int Res(int n){
    int s=1;
    while(n > 1){
        int temp = check[n],count = 0;
        while(n > 1 && n%temp == 0){
            n /= temp;
            count++;
        }
        if (count %2==1) s*=temp;
    }
}

int main() {
    IN();
    int t; cin >> t;
    sangNT();
    while (t--){
        int n;
        cin >> n;
        cout << Res(n) << '\n';
    }
    return 0;
}