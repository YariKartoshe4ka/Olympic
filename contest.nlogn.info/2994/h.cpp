#include <bits/stdc++.h>

using namespace std;
using ld = long double;

const ld eps = 1e-8;


int a, b, c, d;

ld f(ld x) {
    return a * x*x*x + b * x*x + c * x + d;
}


int main() {
    freopen("cubroot.in", "r", stdin);
    freopen("cubroot.out", "w", stdout);

    cout << fixed << setprecision(7);
    cin >> a >> b >> c >> d;

    ld l = -1e5, r = 1e5, mid;
    while (r - l >= eps) {
        mid = (l + r) / 2;
        if (a > 0) {
            if (f(mid) >= eps * eps * eps)
                r = mid;
            else
                l = mid;
        }
        else {
            if (f(mid) >= eps * eps * eps)
                l = mid;
            else
                r = mid;
        }

    }

    // cout << f(l) << endl;
    cout << l << endl;

    return 0;
}
