#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main() {
    ll n, x, y;
    cin >> n >> x >> y;

    if (x > y)
        swap(x, y);

    --n;

    ll l = 0, r = n + 1, mid;
    while (r - l > 1) {
        mid = (l + r) / 2;
        if (mid * x < (n - mid) * y)
            l = mid;
        else
            r = mid;
    }

    cout << (n > 0 ?
        min(
            max(r * x, (n - r) * y),
            max((r - 1) * x, (n - r + 1) * y)
        )
    : 0) + x << endl;
    return 0;
}
