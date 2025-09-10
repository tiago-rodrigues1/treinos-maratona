#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int n; cin >> n;

    vector<string> vec(n, "");

    for (int i = 0; i < s.size(); i++) vec[i % n] += s[i];

    for (auto &v : vec) sort(v.begin(), v.end());

    string out = "";
    int k = 0;

    for (int i = 0; i < s.size(); i++) {
        if (i >= n and i % n == 0) k++;
        out += vec[i % n][k];        
    }

    cout << out << endl;

    return 0;
}