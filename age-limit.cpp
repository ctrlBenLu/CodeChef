#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, y, a;
  cin >> x >> y >> a;

  a >= x && a < y ? cout << "YES\n" : cout << "NO\n";
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t; cin >> t;
  
  while (t--) {
    solve();
  }

  return 0;
}