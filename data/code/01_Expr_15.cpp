#include <iostream>
#include <cmath>
int main() {
    double x; std::cin >> x;
    std::cout << round(1e6 * (pow(x, sqrt(2 * log(x + 1))) / (10 - x))) / 1e6;
}