#include <iostream>
#include <string>
int main() {
  std::string check, ans;
  std::getline(std::cin, check);
  std::getline(std::cin, ans);
  if (ans.length() != check.length())
    std::cout << "Incomplete answer";
  else {
    int n = 0;
    for (int i = 0; i < check.length(); i++) {
      if (check[i] == ans[i]) n++;
    }
    std::cout << n;
  }
}