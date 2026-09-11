#include <iostream>
int main() {
  std::string line;
  getline(std::cin, line);
  int how_many_left = 10;
  bool vec[] = {true, true, true, true, true, true, true, true, true, true};
  for (char x : line) {
    if (isdigit(x)) {
      if (vec[x - '0']) how_many_left--;
      vec[x - '0'] = false;
    }
  }
  if (how_many_left == 0) std::cout << "None";
  for (int i = 0; i < 9; i++) {
    if (vec[i]) std::cout << i;
    if (vec[i] && how_many_left > 1) {
      std::cout << ',';
      how_many_left--;
    }
  }
}