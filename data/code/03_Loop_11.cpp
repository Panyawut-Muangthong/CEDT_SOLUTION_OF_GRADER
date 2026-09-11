#include <cmath>
#include <iostream>
int main() {
  double sum = 0.00;
  int n = 0;
  double x;
  std::cin >> x;
  while (x != -1) {
    sum += x;
    n++;
    std::cin >> x;
  }
  if (n == 0)
    std::cout << "No Data";
  else
    std::cout << round((sum / n) * 100) / 100.0;
}