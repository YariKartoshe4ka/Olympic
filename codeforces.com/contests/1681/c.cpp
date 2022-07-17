#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n; ++i)
        cin >> b[i];

    int k = 0;
    vector<pair<int, int>> ans;

    for (int i = 0; i < n - 1; ++i) {
        vector<int> mins_a, mins_b;

        int mina = *min_element(a.begin() + i, a.end());
        int minb = *min_element(b.begin() + i, b.end());

        for (int j = i; j < n; ++j) {
            if (a[j] == mina) mins_a.push_back(j);
            if (b[j] == minb) mins_b.push_back(j);
        }

        vector<int> v;
        set_intersection(
            mins_a.begin(), mins_a.end(),
            mins_b.begin(), mins_b.end(),
            back_inserter(v)
        );

        if (!v.size()) {
            cout << "-1\n";
            return;
        }

        if (i == v[0])
            continue;

        ++k;
        ans.push_back({i + 1, v[0] + 1});

        swap(a[i], a[v[0]]);
        swap(b[i], b[v[0]]);
    }

    cout << k << '\n';
    for (auto [i, j] : ans)
        cout << i << ' ' << j << '\n';
}


int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
