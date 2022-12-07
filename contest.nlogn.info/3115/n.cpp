#include <bits/stdc++.h>
using namespace std;


void factorize(map<int, int> &d, int x) {
    for (long long i = 2; i * i <= x; ++i) {
        while (x % i == 0) {
            x /= i;
            ++d[i];
        }
    }
    if (x > 1) ++d[x];
}


int main() {
    map<int, int> d;

    for (int i = 0; i < 10; ++i) {
        int x;
        cin >> x;
        factorize(d, x);
    }

    int ans = 1;
    for (auto [p, a] : d)
        ans = ans * (a + 1) % 10;

    cout << ans << endl;

    return 0;
}
