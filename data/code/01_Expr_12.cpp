#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
    double W; std::cin >> W;
    double H; std::cin >> H;
    std::cout << std::setprecision(15) << sqrt(W * H) / 60.0 << '\n';
    std::cout << std::setprecision(15) << 0.024265 * pow(W, 0.5378) * pow(H, 0.3964) << '\n';
    std::cout << std::setprecision(15) << 0.0333 * pow(W, 0.6157 - (0.0188 * log10(W))) * pow(H, 0.3);
}