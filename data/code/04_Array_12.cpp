#include <iostream>
int main() {
  int n;
  std::cin >> n;
  std::string name_to_nick[] = {"Dick", "Bill",  "Jim",  "Jack", "Peggy",
                                "Ed",   "Sally", "Andy", "Tony", "Debbie"};
  std::string nick_to_name[] = {"Robert",   "William", "James", "John",
                                "Margaret", "Edward",  "Sarah", "Andrew",
                                "Anthony",  "Deborah"};
  for (int i = 0; i < n; i++) {
    std::string name;
    std::cin >> name;
    int j = 0;
    while (j < 10) {
      if (name_to_nick[j] == name || nick_to_name[j] == name) break;
      j++;
    }
    if (j == 10) {
      std::cout << "Not found\n";
      continue;
    }
    if (name_to_nick[j] == name) std::cout << nick_to_name[j] << '\n';
    if (nick_to_name[j] == name) std::cout << name_to_nick[j] << '\n';
  }
}