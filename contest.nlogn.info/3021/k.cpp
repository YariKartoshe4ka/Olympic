#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        if (x > y) swap(x, y);
        a[i] = x;
        b[i] = y;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<pair<int, int>> p(m);
    for (int i = 0; i < m; ++i) {
        int t;
        cin >> t;
        p[i] = {t, i};
    }

    sort(p.begin(), p.end());

    vector<int> ans(m);

    int i = 0, j = 0, cnt = 0;
    for (int k = 0; k < m; ++k) {
        while (a[i] <= p[k].first && i < n) {
            ++cnt;
            ++i;
        }

        while (b[j] < p[k].first && j < n) {
            --cnt;
            ++j;
        }

        ans[p[k].second] = cnt;
    }

    for (int &i : ans)
        cout << i << ' ';

    return 0;
}
