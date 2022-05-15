#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    long long cnt = 0;

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int m = a[distance(a.begin(), min_element(a.begin(), a.end()))];

    for (int i = 0; i < n; ++i)
        cnt += a[i] - m;

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
