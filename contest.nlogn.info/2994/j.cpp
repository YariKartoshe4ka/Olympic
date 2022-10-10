#pragma GCC optimize("O3")

#include <bits/stdc++.h>

using namespace std;


set<pair<int, int>> a;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, r;
    cin >> n >> r;

    pair<int, int> ans[n];
    vector<int> test;

    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        a.insert({t, i + 1});
    }

    int i = 0, j = 0;
    while (a.size()) {
        int x = -1e9 - 1;

        auto it = a.upper_bound({x + r, 1e7});
        while (it != a.end()) {
            x = (*it).first;
            ans[j] = {i, (*it).second};
            a.erase(it);
            it = a.upper_bound({x + r, 1e7});
            ++j;
        }
        ++i;
    }

    i = 0, j = 0;
    int cnt = 1;
    for (int i = 0; i < n - 1; ++i)
        if (ans[i].first != ans[i + 1].first)
            ++cnt;

    cout << cnt << '\n';
    while (j < n) {
        int cnt = 0;
        for (; ans[j].first == i && j < n; ++j) ++cnt;
        cout << cnt << ' ';

        j -= cnt;
        for (; ans[j].first == i && j < n; ++j)
            cout << ans[j].second << ' ';

        cout << '\n';
        ++i;
    }


    return 0;
}
