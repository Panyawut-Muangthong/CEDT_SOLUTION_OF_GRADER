#include <iostream>
int main() {
    int num; std::cin >> num;
    if(num < 0) std::cout << "negative\n";
    else if(num > 0) std::cout << "positive\n";
    else std::cout << "zero\n";
    if(num % 2) std::cout << "odd\n";
    else std::cout << "even\n";
}