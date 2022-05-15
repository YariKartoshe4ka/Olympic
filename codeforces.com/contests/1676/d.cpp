#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int> (m));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    vector<long long> x;
    for (int k = 0; k < n; ++k) {
        int i = k, j = 0;
        x.push_back(0);
        while (i >= 0 && j < m) {
            x.back() += a[i][j];
            --i;
            ++j;
        }
    }

    for (int k = 1; k < m; ++k) {
        int i = n - 1, j = k;
        x.push_back(0);
        while (i >= 0 && j < m) {
            x.back() += a[i][j];
            --i;
            ++j;
        }
    }

    vector<long long> y;
    for (int k = 0; k < m; ++k) {
        int i = n - 1, j = k;
        y.push_back(0);
        while (i >= 0 && j >= 0) {
            y.back() += a[i][j];
            --i;
            --j;
        }
    }

    for (int k = n - 2; k >= 0; --k) {
        int i = k, j = m - 1;
        y.push_back(0);
        while (i >= 0 && j >= 0) {
            y.back() += a[i][j];
            --i;
            --j;
        }
    }

    long long ans = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            ans = max(ans, x[i + j] + y[n - i - 1 + j] - a[i][j]);
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
