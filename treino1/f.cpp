#include <bits/stdc++.h>
using namespace std;
#define long long ll

int main() {
    int n, k; cin >> n >> k;
    vector<vector<int>> input;

    bool b = true;

    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;

        vector<int> vec;

        vec.push_back(a);
        vec.push_back(b);

        input.push_back(vec);
    }

    for (int i = 0; i < n; i++) {
        if (input[i][1] == input[input[i][0] - 1][1]) {
            continue;
        } else {
            cout << "N\n";
            b = false;
            break;
        }
    }

    if (b) cout << "Y\n";

    return 0;
}