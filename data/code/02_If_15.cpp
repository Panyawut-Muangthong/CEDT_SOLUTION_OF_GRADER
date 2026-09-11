#include <iostream>
int main() {
    std::string s; std::cin >> s;
    if(s.length() != 10) std::cout << "Not a mobile number";
    else {
        if(s[0] == '0' && (s[1] == '6' || s[1] == '8' || s[1] == '9')) std::cout << "Mobile number";
        else std::cout << "Not a mobile number";
    }
}