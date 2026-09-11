#include <iostream>
int main() {
  int n;
  std::cin >> n;
  int d = 2;
  while (d <= n) {
    if (d == n && n % d == 0) {
      std::cout << d;
      n /= d;
    } else if (n % d == 0) {
      std::cout << d << '*';
      n /= d;
    } else
      d++;
  }
}