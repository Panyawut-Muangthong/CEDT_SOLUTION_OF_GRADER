#include <iostream>
int main() {
  int n;
  std::cin >> n;
  int array[n], left[n], right[n];
  for (int i = 0; i < n; i++) std::cin >> array[i];
  left[0] = array[0];
  right[n - 1] = array[n - 1];
  for (int i = 1; i < n; i++) left[i] = std::max(left[i - 1], array[i]);
  for (int i = n - 2; i >= 0; i--) right[i] = std::max(right[i + 1], array[i]);
  int total = 0;
  for (int i = 1; i < n - 1; i++)
    total += std::min(left[i], right[i]) - array[i];
  std::cout << total;
}