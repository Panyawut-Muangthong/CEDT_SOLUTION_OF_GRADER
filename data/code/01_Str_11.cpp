#include <iostream>
#include <string>
int main() {
    std::string s; std::cin >> s;
    int sum = 0;
    for(int i = 0 ; i < 12 ; i++) {
        sum += (13 - i)*(s[i] - '0');
    }
    sum %= 11;
    char n12 = ((11 - sum) % 10) + '0';
    for(int i = 0 ; i < 12 ; i++) {
        std::cout << s[i];
        if(i == 0 || i == 4 || i == 9 || i == 11) std::cout << '-';
    }
    std::cout << n12;
}