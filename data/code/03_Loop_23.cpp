#include <iostream>
#include <string>
int main() {
  std::string s;
  std::cin >> s;
  int n;
  std::cin >> n;
  std::string temp = "";
  temp += s[0];
  for (int i = 1; i < s.length() + 1; i++) {
    if (i == s.length()) {
      if (temp.length() < n) std::cout << temp;
    } else {
      if (s[i] != s[i - 1]) {
        if (temp.length() < n) std::cout << temp;
        temp = "";
      }
      temp += s[i];
    }
  }
}