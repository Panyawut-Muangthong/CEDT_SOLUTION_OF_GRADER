#include <iostream>
int main() {
    int day, month, year;
    std::cin >> day >> month >> year;
    year -= 543;
    int total = day;
    if(month > 1) total += 31;
    if(month > 2) total += 28;
    if(month > 3) total += 31;
    if(month > 4) total += 30;
    if(month > 5) total += 31;
    if(month > 6) total += 30;
    if(month > 7) total += 31;
    if(month > 8) total += 31;
    if(month > 9) total += 30;
    if(month > 10) total += 31;
    if(month > 11) total += 30;
    if(month > 2 && year % 400 == 0) total++;
    else if(month > 2 && year % 4 == 0 && year % 100 != 0) total++;
    std::cout << total;
}