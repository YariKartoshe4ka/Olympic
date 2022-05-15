#include <bits/stdc++.h>
using namespace std;


pair<int, pair<int, int>> dfs(bool* used, vector<vector<int>>& g, bool* color, int x, pair<int, pair<int, int>> colors) {
    used[x] = true;

    for (int i : g[x]) {
        if (!used[i]) {
            auto z = dfs(used, g, color, i, {0, {0, 0}});
            colors.second.first += z.second.first;
            colors.second.second += z.second.second;
            colors.first += z.first;
        }
    }

    if (color[x])
        ++colors.second.first;
    else
        ++colors.second.second;

    colors.first += colors.second.first == colors.second.second;

    return colors;
}


void solve() {
    int n;
    cin >> n;

    bool used[n] = {false};
    vector<vector<int>> g(n);
    bool color[n];

    for (int i = 1; i < n; ++i) {
        int p;
        cin >> p;
        --p;

        g[i].push_back(p);
        g[p].push_back(i);
    }

    string s;
    cin >> s;

    for (int i = 0; i < n; ++i)
        color[i] = s[i] == 'W';

    cout << dfs(used, g, color, 0, {0, {0, 0}}).first << '\n';
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
