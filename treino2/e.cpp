#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  array<array<bool, 10>, 10> board(array<array<bool, 10>, 10>{false});
  bool valid = true;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    int d, l, r, c;
    cin >> d >> l >> r >> c;

    int rf = r, cf = c + l - 1;
    if (d == 1)  {
      rf = r + l - 1;
      cf = c;
    }

    if (r < 1 || r > 10 || rf < 1 || rf > 10 || c < 1 || c > 10 || cf < 1 || cf > 10) {
      valid = false;
      break;
    }

    if (!valid) {
      break;
    }

    if (d == 1) {
      for (int j = r - 1; j < rf; j++) {
        if (board[j][c - 1]) {
          valid = false;
          break;
        }

        board[j][c - 1] = true;
      }
    } else {
      for (int j = c - 1; j < cf; j++) {
        if (board[r - 1][j]) {
          valid = false;
          break;
        }

        board[r - 1][j] = true;
      }
    }
  }

  if (valid) {
    cout << "Y\n";
  } else {
    cout << "N\n";
  } 

  return 0;
}