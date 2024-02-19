#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin >> n;
    m = n/1000;
    if (m < 500) cout << " " << n;
    if (m > 500 && m <= 1000) cout << " " << int(n*98/100);
    if (m > 1000 && m <= 2000) cout << " " << int(n*95/100);
    if (m > 2000 && m <= 5000) cout << " " << int(n*93/100);
    if (m > 5000 && m <= 10000) cout << " " << int(n*92/100);
    if (m > 10000) cout << " " << int (n*90/100);
    return 0;
}
