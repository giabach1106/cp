#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int tongcacso = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') 
            tong = tong + s[i] - 48;
        
    }
    cout << tong;
    return 0;
}
