#include <algorithm>
#include <cmath>
#include <iostream>
int main() {
  double a;
  std::cin >> a;
  double L = 0;
  double U = a;
  double x = L + (U - L) / 2.0;
  while (std::abs(a - std::pow(10.0, x)) >
         1e-10 * std::max(a, std::pow(10.0, x))) {
    if (std::pow(10.0, x) > a)
      U = x;
    else if (std::pow(10.0, x) < a)
      L = x;
    x = L + (U - L) / 2.0;
  }
  std::cout << x;
}