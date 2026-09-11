#include <iostream>
#include <string>
int main() {
  std::string s;
  std::getline(std::cin, s);
  for (char c : s) {
    if (c == '(')
      std::cout << '[';
    else if (c == ')')
      std::cout << ']';
    else if (c == '[')
      std::cout << '(';
    else if (c == ']')
      std::cout << ')';
    else
      std::cout << c;
  }
}