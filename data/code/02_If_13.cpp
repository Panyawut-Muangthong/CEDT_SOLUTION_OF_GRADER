#include <iostream>
#include <cmath>
int main() {
    double a, b, c, d;
    std::cin >> a >> b >> c >> d;
    double sum = a + b + c + d;
    double mx = INT_MIN, mn = INT_MAX;
    if(a > mx) mx = a;
    if(b > mx) mx = b;
    if(c > mx) mx = c;
    if(d > mx) mx = d;
    if(a < mn) mn = a;
    if(b < mn) mn = b;
    if(c < mn) mn = c;
    if(d < mn) mn = d;
    sum = sum - mn - mx;
    std::cout << round((sum / 2) * 100) / 100.0;
}