#include <bits/stdc++.h>
using namespace std;


int n, m;
vector<int> d, a;


bool check(int x) {
    vector<pair<int, int>> v(m, {-1, -1});

    for (int i = 0; i < x; ++i) {
        if (d[i] == 0)
            continue;

        v[d[i] - 1] = {i + 1, d[i] - 1};
    }

    for (auto &i : v)
        if (i == make_pair(-1, -1))
            return 0;

    sort(v.begin(), v.end());

    int fr = 0, prev_i = 0;
    for (auto [i, ai] : v) {
        fr += i - prev_i - 1;
        if (fr >= a[ai])
            fr -= a[ai];
        else return 0;
        prev_i = i;
    }
    return 1;
}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    d.assign(n, 0);
    a.assign(m, 0);

    for (int i = 0; i < n; ++i)
        cin >> d[i];

    for (int i = 0; i < m; ++i)
        cin >> a[i];

    int l = 0, r = n + 1, mid;
    while (r - l > 1) {
        mid = (l + r) / 2;
        if (check(mid))
            r = mid;
        else
            l = mid;
    }

    cout << (r == n + 1 ? -1 : r) << endl;

    return 0;
}
