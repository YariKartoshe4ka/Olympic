#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll MAX_NR = 1e6;

vector<bool> p(1e6 + 1, 1);


int main() {
    for (ll i = 2; i <= MAX_NR; ++i) {
        if (!p[i]) continue;
        for (ll j = i * i; j <= MAX_NR; j += i)
            p[j] = 0;
    }

    ll l, r;
    cin >> l >> r;

    ll ans = 0;

    for (int i = 1; i <= MAX_NR; ++i) {
        if (!p[i]) continue;

        ll x = i;
        for (int j = 2; j <= 40; ++j) {
            x *= i;

            if (p[j + 1] && x >= l && x <= r) ++ans;

            if (x >= 1e12) break;
        }
    }

    cout << r - l + 1 - ans << endl;

    return 0;
}
