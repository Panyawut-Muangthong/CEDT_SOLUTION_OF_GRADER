#include <iostream>
#include <string>
long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long power10(int n) {
    long long result = 1;
    for (int i = 0; i < n; i++)
        result *= 10;
    return result;
}
int main() {
    int a;
    std::cin >> a;
    std::string b;
    std::cin >> b;
    std::string c;
    std::cin >> c;
    long long upper, lower;
    if (c == "0") {
        upper = std::stoll(b) + a * power10(b.length());
        lower = power10(b.length());
    }
    else {
        long long first = std::stoll(b + c);
        long long second = std::stoll(b);
        upper = first - second;
        lower = power10(b.length()) *
                (power10(c.length()) - 1);
        upper += a * lower;
    }
    long long d = gcd(upper, lower);
    upper /= d;
    lower /= d;
    std::cout << upper << " / " << lower;
}
