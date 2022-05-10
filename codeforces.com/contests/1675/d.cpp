#include <bits/stdc++.h>
using namespace std;


int dfs(bool* used, vector<vector<int>>& ways, vector<vector<int>>& g, int x, int w) {
    ways[w].push_back(x);
    used[x] = true;
    bool f = true;

    for (int i : g[x]) {
        if (!used[i]) {
            w = dfs(used, ways, g, i, w);
            f = false;
        }
    }
    if (f)
        ++w;

    return w;
}


void solve() {
    int n;
    cin >> n;

    bool used[n] = {false};
    vector<vector<int>> g(n);
    vector<vector<int>> ways(n + 1);

    int r;

    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;
        --p;

        if (i == p)
            r = i;
        else {
            g[i].push_back(p);
            g[p].push_back(i);
        }
    }

    int w = dfs(used, ways, g, r, 0);
    cout << w << '\n';

    for (int i = 0; i < w; ++i) {
        auto v = ways[i];

        cout << v.size() << '\n';

        for (auto i : v)
            cout << i + 1 << ' ';
        cout << '\n';
    }
    cout << '\n';
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
