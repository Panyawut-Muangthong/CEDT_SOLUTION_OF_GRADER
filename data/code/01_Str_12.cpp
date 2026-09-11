#include <iostream>
#include <string>
int main() {
    std::string months = "JANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC";
    std::string in; std::cin >> in;
    int day = (in[0] - '0') * 10 + (in[1] - '0');
    int key = (in[3] - '0') * 10 + (in[4] - '0');
    int year = stoi(in.substr(6)) - 543;
    std::cout << months.substr((key - 1) * 3, 3) << ' ' << day << ", " << year;
}