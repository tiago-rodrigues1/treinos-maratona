#include <bits/stdc++.h>
using namespace std;
#define long long ll

int main() {
    int t, d, m; cin >> t >> d >> m;
    int k = 0;
    bool b = false;

    for (int i = 0; i < m; i++) {
        int y; cin >> y;
        if (y - k >= t) {
            b = true;
        }

        k = y;
    }

    if (d - k >= t) b = true;

    if (b) {
        cout << "Y\n";
    } else {
        cout << "N\n";
    }

    return 0;
}