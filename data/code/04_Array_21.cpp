#include <iomanip>
#include <iostream>
int main() {
  int n;
  std::cin >> n;
  int array[n];
  for (int i = 0; i < n; i++) std::cin >> array[i];
  for (int i = 0; i < n; i++) {
    double C = array[i];
    for (int j = i - 1; j >= 0; j--) {
      C = array[j] + (1 / C);
    }
    std::cout << std::setprecision(10) << C << '\n';
  }
}