#include <iostream>
#include <climits>
#include <algorithm>
int main() {
  int n;
  std::cin >> n;
  int control = 0;
  int mnx, mny = mnx = INT_MAX;
  int mxx, mxy = mxx = INT_MIN;
  for (int i = 0; i < n; i++) {
    int x, y;
    std::cin >> x >> y;
    if (control % 2 == 0) {
      mnx = std::min(mnx, x);
      mxx = std::max(mxx, x);
      mny = std::min(mny, y);
      mxy = std::max(mxy, y);
    } else {
      mnx = std::min(mnx, y);
      mxx = std::max(mxx, y);
      mny = std::min(mny, x);
      mxy = std::max(mxy, x);
    }
    control++;
  }
  std::string s;
  std::cin >> s;
  if (s == "Zig-Zag") {
    std::cout << mnx << ' ' << mxy;
  } else if (s == "Zag-Zig") {
    std::cout << mny << ' ' << mxx;
  }
}