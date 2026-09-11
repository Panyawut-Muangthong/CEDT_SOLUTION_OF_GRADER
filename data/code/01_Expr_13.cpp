#include <iostream>
#include <cmath>
int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    double second = sqrt(b * b - 4 * a * c);
    std::cout <<round((-b - second) / (2 * a) * 1e3) / 1e3 << ' ' << round((-b + second) / (2 * a) * 1e3) / 1e3;
}