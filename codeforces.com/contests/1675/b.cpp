#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    long long cnt = 0;

    for (int i = n - 2; i >= 0; --i) {
        while (a[i] > 0 && a[i] >= a[i + 1]) {
            ++cnt;
            a[i] /= 2;
        }

        if (a[i] == 0 && a[i + 1] == 0) {
            cout << -1 << '\n';
            return;
        }
    }
    cout << cnt << '\n';
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
