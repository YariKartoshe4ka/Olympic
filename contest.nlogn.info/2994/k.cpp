#include <bits/stdc++.h>

using namespace std;
using ll = long long;


ll lb_sqrt(ll x) {
    ll l = 0, r = 1e9, mid;
    while (r - l > 1) {
        mid = (l + r) / 2;
        if (mid * mid >= x)
            r = mid;
        else
            l = mid;
    }
    return r;
}

ll ub_sqrt(ll x) {
    ll l = 0, r = 1e9, mid;
    while (r - l > 1) {
        mid = (l + r) / 2;
        if (mid * mid > x)
            r = mid;
        else
            l = mid;
    }
    return r;
}

ll lb_cbrt(ll x) {
    ll l = 0, r = 1e6, mid;
    while (r - l > 1) {
        mid = (l + r) / 2;
        if (mid * mid * mid >= x)
            r = mid;
        else
            l = mid;
    }
    return r;
}

ll ub_cbrt(ll x) {
    ll l = 0, r = 1e6, mid;
    while (r - l > 1) {
        mid = (l + r) / 2;
        if (mid * mid * mid > x)
            r = mid;
        else
            l = mid;
    }
    return r;
}


int main() {
    ll a, b, k, ans = 0;
    cin >> a >> b >> k;

    ll a_cbrt = lb_cbrt(a), b_cbrt = ub_cbrt(b);
    ll a_sqrt = lb_sqrt(a), b_sqrt = ub_sqrt(b) - 1;

    cout << a_cbrt << ' ' << b_cbrt << endl;

    for (ll i = a_cbrt; i < b_cbrt; ++i) {
        ll a_sqrt_l = max(lb_sqrt(max(1ll, i * i - k)), a_sqrt),
           a_sqrt_r = min(ub_sqrt(i * i + k) - 1, b_sqrt);
        cout << a_sqrt_l << ' ' << a_sqrt_r << endl;
        ans += max(0ll, a_sqrt_r - a_sqrt_l + 1);
    }

    cout << ans << endl;
    return 0;
}
