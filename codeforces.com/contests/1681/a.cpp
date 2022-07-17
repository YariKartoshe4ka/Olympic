#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, m;

    int amax = -1, bmax = -1;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        amax = max(amax, t);
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        int t;
        cin >> t;
        bmax = max(bmax, t);
    }

    cout << (amax >= bmax ? "Alice" : "Bob") << '\n';
    cout << (bmax >= amax ? "Bob" : "Alice") << '\n';
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
