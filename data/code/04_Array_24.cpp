#include <algorithm>
#include <iostream>
int main() {
  int n;
  std::cin >> n;
  int array[n], check[n];
  for (int i = 0; i < n; i++) {
    std::cin >> array[i];
    check[i] = array[i];
  }
  std::sort(check, check + n);
  int end = n - 1;
  for (int x : array) std::cout << x << ' ';
  std::cout << '\n';
  while (!std::equal(array, array + n, check)) {
    while (end >= 0 && check[end] == array[end]) end--;
    int i = 0;
    int start = 0;
    while (i < n && array[i] != check[end]) i++;
    if (i == 0) {
      int r = end;
      while (start < r) std::swap(array[start++], array[r--]);
      for (int x : array) std::cout << x << ' ';
      std::cout << '\n';
    } else {
      while (start < i) std::swap(array[start++], array[i--]);
      for (int x : array) std::cout << x << ' ';
      std::cout << '\n';
    }
  }
}