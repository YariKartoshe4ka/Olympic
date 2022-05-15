#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());

    vector<int> pref(n + 1, 0);

    for (int i = 1; i <= n; ++i)
        pref[i] = pref[i - 1] + a[i - 1];

    while (q--) {
        ll x;
        cin >> x;

        int l = -1, r = n + 1, mid;
        while (l < r - 1) {
            mid = (l + r) / 2;
            if (pref[mid] < x)
                l = mid;
            else
                r = mid;
        }

        if (r > n)
            cout << -1;
        else
            cout << r;
        cout << '\n';
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
