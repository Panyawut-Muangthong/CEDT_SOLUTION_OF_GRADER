#include <iostream>
#include <cmath>
int main() {
    int xe, ye, re, rp, xm, ym;
    std::cin >> xe >> ye >> re >> rp >> xm >> ym;
    int dx = xe - xm;
    int dy = ye - ym;
    double C = sqrt(dx * dx + dy * dy);
    int B = ym - ye;
    int A = xm - xe;
    int c = abs(re - rp);
    double xp = xe + A * c / C;
    double yp = ye + B * c / C;
    std::cout << round(xp) << ' ' << round(yp);
}