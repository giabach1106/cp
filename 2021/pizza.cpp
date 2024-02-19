#include <bits/stdc++.h>
using namespace std;

int a[100], k[100], b[100][100];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;

    int sol = 0;
    for (int i = 0; i < m; i++) {
        cin >> k[i];

        bool ok = true;
        for (int j = 0; j < k[i]; j++) {
            cin >> b[i][j];
            for (int x = 0; x < n; x++)
                if (a[x] == b[i][j])
                    ok = false;
        }

        if (ok) sol++;
    }

    cout << sol << '\n';

    return 0;
}

