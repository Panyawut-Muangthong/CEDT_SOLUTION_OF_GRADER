#include <iostream>
int main() {
  int n;
  std::cin >> n;
  for (int i = 1; i < n; i++) {
    int first_dot = n - i;
    int mid = 2 * i - 2;
    for (int j = 0; j < first_dot; j++) std::cout << '.';
    std::cout << '*';
    for (int j = 0; j < mid - 1; j++) std::cout << '.';
    if (mid > 0) std::cout << '*';
    std::cout << '\n';
  }
  for (int i = 0; i < 2 * n - 1; i++) std::cout << '*';
}