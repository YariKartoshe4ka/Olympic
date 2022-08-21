#include <bits/stdc++.h>
using namespace std;


bool cmp(pair<int, int> l, pair<int, int> r) {
    if (l.first == r.first)
        return l.second > r.second;
    return l.first <= r.first;
}


int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        a[i] = {y, x};
    }

    sort(a.begin(), a.end(), cmp);

    int ans = 0, iend = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i].second > iend) {
            iend = a[i].first;
            ++ans;
        }
    }

    cout << ans << endl;

    return 0;
}
