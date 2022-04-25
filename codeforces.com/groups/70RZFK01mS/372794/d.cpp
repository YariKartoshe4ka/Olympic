#include <iostream>
#include <cmath>
using namespace std;

bool binpow (long long a, int n, int k) {
    long long res = 1, l = 1, r = 10;

    int i = 1;
    while (i < k) {
        l *= 10;
        r *= 10;
    }

    while (n) {
        if (n & 1)
            res *= a;
        a *= a;
        n >>= 1;

        if (res >= l && res < r) return true;
    }
    return false;
}

int main() {
    int k;
    cin >> k;

    long long ans = 0;

    for (int i = 2; i < min(1e9, pow(2, k)); ++i) {

        for (int j = 1; j <= 57; ++j) {
            if (binpow(i, j, k)) ++ans;
            else break;
        }
    }

    return 0;
}
