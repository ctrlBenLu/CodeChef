#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  string s; cin >> s;
  string vowels = "aeiou";
  int counter = 0;

  for (int i = 0; i < n && counter != 4; i++) {
    if (find(vowels.begin(), vowels.end(), s[i]) == vowels.end()) {
      counter++;
    } else {
      counter = 0;
    }
  }

  if (counter == 4) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t; cin >> t;

  while (t--) solve();

  return 0;
}