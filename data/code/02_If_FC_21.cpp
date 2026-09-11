#include <iostream>
int main() {
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  if (a > b) {
    std::swap(a, b);
    if (d >= a) {
      if (c > d) c = c - a;
    } else
      c = c + a;
    b = a + c + d;
  } else {
    if (c > a && a >= b)
      d = d + a;
    else if (d > c)
      b = b + 2;
    else
      b = 2 * b;
  }
  std::cout << a << ' ' << b << ' ' << c << ' ' << d;
}