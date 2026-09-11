#include <iostream>
int main() {
  int n;
  std::cin >> n;
  int array[n][4];
  for (int i = 0; i < n; i++)
    std::cin >> array[i][0] >> array[i][1] >> array[i][2] >> array[i][3];
  int ans[n * n][2] = {0};
  int curr = 0;
  int mx = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int L = std::max(array[i][0], array[j][0]);
      int D = std::max(array[i][1], array[j][1]);
      int R = std::min(array[i][2], array[j][2]);
      int U = std::min(array[i][3], array[j][3]);
      if (L < R && D < U) {
        int area = (R - L) * (U - D);
        if (area > mx) {
          mx = area;
          curr = 0;
          ans[curr][0] = i;
          ans[curr][1] = j;
          curr++;
        } else if (area == mx) {
          ans[curr][0] = i;
          ans[curr][1] = j;
          curr++;
        }
      }
    }
  }
  if (mx > 0) {
    std::cout << "Max overlapping area = " << mx << '\n';
    for (int k = 0; k < curr; k++) {
      std::cout << "rectangles " << ans[k][0] << " and " << ans[k][1] << '\n';
    }
  } else {
    std::cout << "No overlaps";
  }
}