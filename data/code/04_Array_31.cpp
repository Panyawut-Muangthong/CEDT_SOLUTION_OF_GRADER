#include <iostream>
#include <vector>
const std::string below_twenty[] = {
    "",        "one",     "two",       "three",    "four",
    "five",    "six",     "seven",     "eight",    "nine",
    "ten",     "eleven",  "twelve",    "thirteen", "fourteen",
    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
const std::string tens[] = {"",      "",      "twenty",  "thirty", "forty",
                            "fifty", "sixty", "seventy", "eighty", "ninety"};
const std::string thousands[] = {"", "thousand", "million", "billion",
                                 "trillion"};
std::string convert(int n) {
  std::string res = "";
  if (n >= 100) {
    res += below_twenty[n / 100] + " hundred";
    n %= 100;
    if (n > 0) res += " ";
  }
  if (n >= 20) {
    res += tens[n / 10];
    if (n % 10 > 0) {
      res += " " + below_twenty[n % 10];
    }
  } else if (n > 0) {
    res += below_twenty[n];
  }
  return res;
}
int main() {
  long long n;
  std::cin >> n;
  if (n == 0) std::cout << "zero";
  std::vector<std::string> part;
  int group_index = 0;
  while (n > 0) {
    int rem = n % 1000;
    if (rem != 0) {
      std::string group_str = convert(rem);
      if (!thousands[group_index].empty()) {
        group_str += " " + thousands[group_index];
      }
      part.push_back(group_str);
    }
    n /= 1000;
    group_index++;
  }
  std::string result = "";
  for (int i = (int)part.size() - 1; i >= 0; i--) {
    result += part[i];
    if (i > 0) result += " ";
  }
  std::cout << result;
}