#include <iostream>
int main() {
  double n;
  std::cin >> n;
  double k = 1, t = 1;
  do {
    t *= (365 - k + 1) / 365;
    if (1 - t >= n) break;
    k++;
  } while (true);
  std::cout << k;
}
