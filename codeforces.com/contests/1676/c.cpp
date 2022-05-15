#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> s(n);

    for (int i = 0; i < n; ++i)
        cin >> s[i];

    long long ans = 1e9;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            long long cnt = 0;

            for (int k = 0; k < m; ++k) {
                cnt += abs((s[i][k] - 'a') - (s[j][k] - 'a'));
            }
            ans = min(ans, cnt);
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
