#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a; cin >> a;
  int b; cin >> b;
  int x;
  int y;
  int test = 0;

  for (int i = 1; i <= 2; i++) {
    cin >> x >> y;

    if (a == x || a == y) {
      if (b == x || b == y) {
        test += i;
      }
    }
  }

  cout << test << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}