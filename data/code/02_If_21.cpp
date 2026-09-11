#include <iostream>
#include <cmath>
int main() {
    long long n; std::cin >> n;
    if(n < 1000) std::cout << n;
    else if(n < 10000) std::cout << round(n/1000.0 * 10.0) / 10.0 << 'K';
    else if(n < 1000000) std::cout << round(n/1000.0) << 'K';
    else if(n < 10000000) std::cout << round(n/1000000.0 * 10.0) / 10.0 << 'M';
    else if(n < 1000000000) std::cout << round(n/1000000.0) << 'M';
    else if(n < 10000000000) std::cout << round(n/1000000000.0 * 10.0) / 10.0 << 'B';
    else std::cout << round(n/1000000000.0) << 'B';
}