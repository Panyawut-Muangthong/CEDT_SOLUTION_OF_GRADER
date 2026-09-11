#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
int main() {
    double pi = M_PI;
    double first = pi - 3628800.0 / pow(8, 8);
    double second = pow(log(9.7), (7.0 / sqrt(71)) - sin(40 * pi / 180.0));
    double down = pow(1.2, pow(2.3, 1/3.0));
    std::cout << (first + second) / down;
}
