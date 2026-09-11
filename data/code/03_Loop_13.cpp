#include <iostream>
int main() {
  std::string s;
  std::cin >> s;
  char c;
  int cnt = 0;
  int ans = 0;
  while (std::cin >> c) {
    if (c == s[cnt % s.length()])
      cnt++;
    else
      cnt = 0;
    if (cnt != 0 && cnt % s.length() == 0) ans++;
  }
  std::cout << ans;
}