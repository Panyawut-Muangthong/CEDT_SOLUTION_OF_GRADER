#include <iostream>
#include <climits>
#include <algorithm>
int main() {
  int x, y;
  int control = 0;
  int mnx = INT_MAX, mxx = INT_MIN;
  int mny = INT_MAX, mxy = INT_MIN;
  while (std::cin >> x) {
    if (x == -998) {
      std::cout << mnx << ' ' << mxy << '\n';
      break;
    } else if (x == -999) {
      std::cout << mny << ' ' << mxx << '\n';
      break;
    }
    std::cin >> y;
    if (control % 2 == 0) {
      mnx = std::min(mnx, x);
      mny = std::min(mny, y);
      mxx = std::max(mxx, x);
      mxy = std::max(mxy, y);
    } else {
      mnx = std::min(mnx, y);
      mny = std::min(mny, x);
      mxx = std::max(mxx, y);
      mxy = std::max(mxy, x);
    }
    control++;
  }
}