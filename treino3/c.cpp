#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
  int n; cin >> n;

  ll smallest = 0;
  int c = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      ll k; cin >> k;

      if (i == 0 && j == 0) {
        smallest = k;
      }

      if (k < smallest) {
        if (i == n - 1 && j == 0) {
          smallest = k;
          c = 3;
        }

        if (i == 0 && j == n - 1) {
          smallest = k;
          c = 1;
        }

        if (i == n - 1 && j == n - 1) {
          smallest = k;
          c = 2;
        }
      }
    }
  }

  cout << c << '\n';
  
  return 0;
}