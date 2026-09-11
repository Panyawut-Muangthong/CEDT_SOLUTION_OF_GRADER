#include <iostream>
int main() {
  int n;
  std::cin >> n;
  double data[n];
  for (int i = 0; i < n; i++) std::cin >> data[i];
  int cnt = 0;
  for (int i = 1; i < n - 1; i++) {
    if (data[i] > data[i - 1] && data[i] > data[i + 1]) cnt++;
  }
  std::cout << cnt;
}