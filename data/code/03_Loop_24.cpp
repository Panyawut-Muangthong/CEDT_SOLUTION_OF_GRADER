#include <iostream>
int main() {
  std::string s;
  std::cin >> s;
  char temp = s[0];
  int current = 1;
  for (int i = 1; i < s.length() + 1; i++) {
    if (i == s.length()) {
      std::cout << temp << ' ' << current << ' ';
    } else {
      if (s[i] != s[i - 1]) {
        std::cout << temp << ' ' << current << ' ';
        temp = s[i];
        current = 1;
      } else
        current++;
    }
  }
}