#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> s(n);

    for (int i = 0; i < n; ++i)
        cin >> s[i];

    int si, sj;

    bool f = true;
    for (int i = 0; i < n && f; ++i) {
        for (char c : s[i]) {
            if (c == 'R') {
                si = i;
                f = false;
                break;
            }
        }
    }

    f = true;
    for (int j = 0; j < m && f; ++j) {
        for (int i = 0; i < n; ++i) {
            if (s[i][j] == 'R') {
                sj = j;
                f = false;
                break;
            }
        }
    }

    if (s[si][sj] == 'R')
        cout << "YES";
    else
        cout << "NO";
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
