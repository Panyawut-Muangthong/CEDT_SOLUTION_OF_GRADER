#include <iostream>
int main() {
  int M;
  std::cin >> M;
  int array[M * M];
  int zero_at = -1;
  for (int i = 0; i < M * M; i++) std::cin >> array[i];
  int inversions = 0;
  for (int i = 0; i < M * M; i++) {
    if (array[i] == 0) zero_at = i / M;
    if (array[i] == 0) continue;
    for (int j = i + 1; j < M * M; j++) {
      if (array[j] == 0) continue;
      if (array[i] > array[j]) inversions++;
    }
  }
  if (M % 2 == 1 && inversions % 2 == 0)
    std::cout << "YES";
  else if (M % 2 == 0 && inversions % 2 != zero_at % 2)
    std::cout << "YES";
  else
    std::cout << "NO";
}