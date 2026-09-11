#include <iostream>
int main() {
  int n;
  std::cin >> n;
  std::string array_name[n];
  int array_price[n];
  for (int i = 0; i < n; i++) std::cin >> array_name[i] >> array_price[i];
  char a, b, c, d;
  std::string name, old;
  int i = 0;
  int total_price = 0;
  while (std::cin >> a >> b >> c >> d >> name) {
    if (i == 0) old = name;
    if (old != name) {
      for (int j = 0; j < n; j++) {
        if (array_name[j] == name) {
          total_price += array_price[j];
          break;
        }
      }
      old = name;
    }
    i++;
  }
  std::cout << total_price;
}