#include <cmath>
#include <iostream>
int main() {
  int R, C;
  std::cin >> R >> C;
  double array[R][C];
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) std::cin >> array[i][j];
  }
  int d[9][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 0},
                 {0, 1},   {1, -1}, {1, 0},  {1, 1}};
  for (int i = 1; i < R - 1; i++) {
    for (int j = 1; j < C - 1; j++) {
      double sum = 0;
      for (auto [dx, dy] : d) {
        int x = i + dx;
        int y = j + dy;
        sum += array[x][y];
      }
      std::cout << round((sum / 9.0) * 100) / 100.0 << ' ';
    }
    std::cout << '\n';
  }
}