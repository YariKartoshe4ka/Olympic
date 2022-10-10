#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vll = vector<ll>;


bool check(vll &a, int k, ll d) {
    int n = a.size();
    ll l = 0;
    --k;

    for (int i = 0; i < n && k; ++i) {
        if (l >= d) {
            --k;
            l = 0;
        }
        l += a[i + 1] - a[i];
    }

    return !k;
}


int main() {
    int n, k;
    cin >> n >> k;

    vll a(n + 1);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    a[n] = a[n - 1];

    ll l = 0, r = 1e10, mid;
    while (r - l > 1) {
        mid = (l + r) / 2;
        if (check(a, k, mid))
            l = mid;
        else
            r = mid;
    }

    cout << l << endl;

    return 0;
}
