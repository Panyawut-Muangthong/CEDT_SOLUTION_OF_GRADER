#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
int main() {
  int d1, m1, y1;
  std::cin >> d1 >> m1 >> y1;
  int d2, m2, y2;
  std::cin >> d2 >> m2 >> y2;
  y1 -= 543;
  y2 -= 543;
  int temp = 0;
  if (m1 <= 12) temp += 31;
  if (m1 <= 11) temp += 30;
  if (m1 <= 10) temp += 31;
  if (m1 <= 9) temp += 30;
  if (m1 <= 8) temp += 31;
  if (m1 <= 7) temp += 31;
  if (m1 <= 6) temp += 30;
  if (m1 <= 5) temp += 31;
  if (m1 <= 4) temp += 30;
  if (m1 <= 3) temp += 31;
  if (m1 <= 2) temp += 28;
  if (m1 <= 1) temp += 31;
  if (m1 <= 2 && ((y1 % 400 == 0) || (y1 % 4 == 0 && y1 % 100 != 0))) temp++;
  int red = temp - d1 + 1;
  temp = 0;
  if (m2 > 11) temp += 30;
  if (m2 > 10) temp += 31;
  if (m2 > 9) temp += 30;
  if (m2 > 8) temp += 31;
  if (m2 > 7) temp += 31;
  if (m2 > 6) temp += 30;
  if (m2 > 5) temp += 31;
  if (m2 > 4) temp += 30;
  if (m2 > 3) temp += 31;
  if (m2 > 2) {
    temp += 28;
    if ((y2 % 400 == 0) || (y2 % 4 == 0 && y2 % 100 != 0)) temp++;
  }
  if (m2 > 1) temp += 31;
  int blue = temp - 1 + d2;
  int black = 365 * std::max(y2 - y1 - 1, 0);
  int t = red + black + blue;
  std::cout << t << ' ';
  double inside = 2 * M_PI * t;
  std::cout << std::round(std::sin(inside / 23) * 100) / 100.0 << ' '
            << std::round(std::sin(inside / 28) * 100) / 100.0 << ' '
            << std::round(std::sin(inside / 33) * 100) / 100.0;
}