#include <iostream>
int main() {
    std::string s; std::cin >> s;
    if(s.length() != 2) std::cout << "Error";
    else {
        if(!isdigit(s[0]) || !isdigit(s[1])) std::cout << "Error";
        else {
            int value = stoi(s);
            if((value > 0 && value <= 2) || (value >= 20 && value <= 40) || (value == 51 || value == 53 || value == 55 || value == 58)) {
                std::cout << "OK";
            } else {
                std::cout << "Error";
            }
        }
    }
}