#include <algorithm>
#include <iostream>
using namespace std;
unsigned long long countDigits(long long x) {
  if (x < 0) return 0;
  if (x == 0) return 1;
  unsigned long long total = 1;
  long long start = 1;
  long long len = 1;
  while (start <= x) {
    long long next_start = (start > (x / 10)) ? (x + 1) : (start * 10);
    long long end = min(x, next_start - 1);
    total += (unsigned long long)(end - start + 1) * len;
    len++;
    if (start > x / 10) break;
    start *= 10;
  }
  return total;
}
int main() {
  long long m, n;
  if (cin >> m >> n) {
    unsigned long long ans = countDigits(n) - countDigits(m - 1);
    cout << ans << "\n";
  }
}