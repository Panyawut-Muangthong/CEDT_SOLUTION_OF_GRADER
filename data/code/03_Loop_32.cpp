#include <iostream>
int main() {
  int n;
  std::cin >> n;
  std::string check = "YGNBPK";
  std::cin.ignore();
  for (int j = 0; j < n; j++) {
    std::string s = "", raw;
    getline(std::cin, raw);
    for (char x : raw) {
      if (x == ' ') continue;
      s += x;
    }
    int indicater = -2;
    int score = 0;
    bool ok = true;
    for (int i = 0; i < s.length(); i++) {
      if (indicater == 5) {
        std::cout << "WRONG_INPUT\n";
        ok = false;
        break;
      }
      if (i + 1 < s.length() && s[i] == 'R' && s[i + 1] == 'R') {
        std::cout << "WRONG_INPUT\n";
        ok = false;
        break;
      }
      if (i == 0 && s[i] != 'R') {
        std::cout << "WRONG_INPUT\n";
        ok = false;
        break;
      }
      if (s[i] == 'R') {
        if (indicater >= 0) {
          std::cout << "WRONG_INPUT\n";
          ok = false;
          break;
        }
        indicater = -2;
      } else
        indicater++;
      if (indicater >= 0 && s[i] != check[indicater]) {
        std::cout << "WRONG_INPUT\n";
        ok = false;
        break;
      }
      if (s[i] == 'R')
        score += 1;
      else if (s[i] == 'Y')
        score += 2;
      else if (s[i] == 'G')
        score += 3;
      else if (s[i] == 'N')
        score += 4;
      else if (s[i] == 'B')
        score += 5;
      else if (s[i] == 'P')
        score += 6;
      else if (s[i] == 'K')
        score += 7;
    }
    if (ok) std::cout << score << '\n';
  }
}