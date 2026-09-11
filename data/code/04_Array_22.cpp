#include <iostream>
int main() {
  int n;
  std::cin >> n;
  std::string array[n];
  for (int i = 0; i < n; i++) std::cin >> array[i];
  char c;
  while (std::cin >> c) {
    if (c == 'C') {
      int mid = n / 2;
      for (int i = 0; i < mid; i++) std::swap(array[i], array[mid + i]);
    } else if (c == 'S') {
      int mid = n / 2;
      std::string array2[n];
      int j = 0;
      for (int i = 0; i < mid; i++) {
        array2[j] = array[i];
        array2[j + 1] = array[i + mid];
        j += 2;
      }
      for (int i = 0; i < n; i++) array[i] = array2[i];
    }
  }
  for (std::string x : array) std::cout << x << ' ';
}