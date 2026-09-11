#include <iostream>
int main() {
  std::string line;
  getline(std::cin, line);
  int array[26] = {0};
  for (char x : line) {
    if (x == ' ') continue;
    array[std::tolower(x) - 'a']++;
  }
  for (int i = 0; i < 26; i++) {
    if (array[i] == 0) continue;
    std::cout << (char)(i + 'a') << " -> " << array[i] << '\n';
  }
}