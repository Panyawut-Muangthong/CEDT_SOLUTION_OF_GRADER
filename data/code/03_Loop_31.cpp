#include <iostream>
using namespace std;
int main() {
    long long M, N;
    if (!(cin >> M >> N)) return 0;
    long long ans = 0;
    if (M == 0) {
        ans++;
        M = 1;
    }
    long long start = 1;
    long long len = 1;
    while (start <= N) {
        long long end = start * 10 - 1;
        long long l = max(M, start);
        long long r = min(N, end);
        if (l <= r) {
            ans += (r - l + 1) * len;
        }
        if (start > N / 10) break;
        start *= 10;
        len++;
    }
    cout << ans << "\n";
}