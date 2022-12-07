#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main() {
    ll x;
    cin >> x;

    vector<int> a;
    for (ll i = 2; i <= 1000; ++i) {
        if (x % i == 0) a.push_back(0);
        while (x % i == 0) {
            ++a.back();
            x /= i;
        }
    }

    ll ans = 1;
    for (int i : a)
        ans *= i;

    cout << ans << endl;

    return 0;
}
