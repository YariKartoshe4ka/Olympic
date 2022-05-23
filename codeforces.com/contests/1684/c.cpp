#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int> (m));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    if (m == 1) {
        cout << "1 1\n";
        return;
    }

    int ans_i = -1, ans_j = -1;

    for (int i = 0; i < n; ++i) {
        vector<int> cp(a[i]);

        sort(cp.begin(), cp.end());
        set<int> err;

        for (int j = 0; j < m; ++j) {
            if (a[i][j] != cp[j])
                err.insert(j);
        }

        if (err.size() == 0)
            continue;

        else if (err.size() != 2) {
            cout << "-1\n";
            return;
        }
        else {
            ans_i = *err.begin();
            ans_j = *next(err.begin(), 1);
        }
    }

    if (ans_i == -1 && ans_j == -1)
        ans_i = ans_j = 0;

    for (int i = 0; i < n; ++i) {
        swap(a[i][ans_i], a[i][ans_j]);

        if (!is_sorted(a[i].begin(), a[i].end())) {
            cout << "-1\n";
            return;
        }
    }

    printf("%d %d\n", ans_i + 1, ans_j + 1);
}


int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
