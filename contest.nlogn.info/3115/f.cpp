#include <bits/stdc++.h>

using namespace std;
using ll = long long;


const int MAX_X = 1e6;
vector<bool> p(MAX_X + 1, 1);


ll bin_sqrt(ll x) {
    ll l = 1, r = x, mid;
    while (r - l > 1) {
        mid = (l + r) / 2;
        (mid > 1e9 || mid * mid > x ? r : l) = mid;
    }
    return l;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    p[0] = p[1] = 0;
    for (ll i = 2; i <= MAX_X; ++i) {
        if (!p[i]) continue;
        for (ll j = i * i; j <= MAX_X; j += i)
            p[j] = 0;
    }

    int n;
    cin >> n;

    while (n--) {
        ll x;
        cin >> x;

        ll r = bin_sqrt(x);

        if (r * r != x || r == 1 || !p[r])
            cout << "NO";
        else
            cout << "YES";
        cout << '\n';
    }

    return 0;
}
