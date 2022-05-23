#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<pair<int, int>> b(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n; ++i)
        b[i] = {a[i] - (n - i + 1), i};

    sort(b.begin(), b.end());

    set<int> err;

    while (k--) {
        err.insert(b.back().second);
        b.pop_back();
    }


    long long ans = 0;
    int p = 0;

    for (int i = 0; i < n; ++i) {
        if (err.count(i))
            ++p;
        else {
            ans += a[i] + p;
        }
    }

    cout << ans << '\n';
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
