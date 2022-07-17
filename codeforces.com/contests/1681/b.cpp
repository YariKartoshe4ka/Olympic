#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, m;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    cin >> m;
    int s = 0;

    for (int i = 0; i < m; ++i) {
        int t;
        cin >> t;
        s += t;
        s %= n;
    }

    cout << a[s] << '\n';

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
