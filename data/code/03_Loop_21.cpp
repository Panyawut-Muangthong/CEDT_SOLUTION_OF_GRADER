#include <iostream>
int main() {
  std::string s;
  while (std::cin >> s) {
    bool A = false;
    bool a = false;
    bool d = false;
    bool etc = false;
    for (char x : s) {
      if (isupper(x))
        A = true;
      else if (islower(x))
        a = true;
      else if (isdigit(x))
        d = true;
      else
        etc = true;
    }
    if (s.length() >= 12 && A && a && d && etc)
      std::cout << ">> strong\n";
    else if (s.length() >= 8 && A && a && d)
      std::cout << ">> weak\n";
    else
      std::cout << ">> invalid\n";
  }
}