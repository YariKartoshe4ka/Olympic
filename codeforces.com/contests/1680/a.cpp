#include <bits/stdc++.h>
using namespace std;


void solve() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (r1 >= l2 && l1 <= r2)
        cout << max(l1, l2);
    else {
        cout << l1 + l2;
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
