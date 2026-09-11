#include <iostream>
int main() {
    double x; std::cin >> x;
    if(x >= 80) std::cout << 'A';
    else if(x >= 70) std::cout << 'B';
    else if(x >= 60) std::cout << 'C';
    else if(x >= 50) std::cout << 'D';
    else std::cout << 'F';
}